/*
    Boost Software License - Version 1.0 - August 17, 2003

    Permission is hereby granted, free of charge, to any person or organization
    obtaining a copy of the software and accompanying documentation covered by
    this license (the "Software") to use, reproduce, display, distribute,
    execute, and transmit the Software, and to prepare derivative works of the
    Software, and to permit third-parties to whom the Software is furnished to
    do so, all subject to the following:

    The copyright notices in the Software and this entire statement, including
    the above license grant, this restriction and the following disclaimer,
    must be included in all copies of the Software, in whole or in part, and
    all derivative works of the Software, unless such copies or derivative
    works are solely in the form of machine-executable object code generated by
    a source language processor.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
    SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
    FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
    ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.
*/

#include <extras/argument_parsing.hpp>

#include <reflection/api.hpp>
#include <reflection/basic_types.hpp>

using String = std::string;

struct GetCommand {
    GetCommand() : show(false) {}

    String objectName;
    String repository;
    String outputFile;
    bool show;

    REFL_BEGIN("GetCommand", 1)
        ARG_REQUIRED(objectName,    "",     "name of the object to retrieve")
        ARG_REQUIRED(repository,    "-R",   "filename of the repository")
        ARG(outputFile,             "-o",   "path to the output file (standard output if not specified)")
        ARG(show,                   "-S",   "actually show contents of object")
    REFL_END

    int execute() {
        reflection::reflectPrint(*this);
        return 0;
    }
};

struct PutCommand {
    PutCommand() : size(0) {}

    String objectName;
    String repository;
    String inputFile;
    int64_t size;

    REFL_BEGIN("PutCommand", 1)
        ARG_REQUIRED(objectName,    "",     "name of the object to create or replace")
        ARG_REQUIRED(repository,    "-R",   "filename of the repository")
        ARG(inputFile,              "-i",   "path to the input file (standard input if not specified)")
        ARG(size,                   "-s",   "data size in bytes")
    REFL_END

    int execute() {
        reflection::reflectPrint(*this);
        return 0;
    }
};

using argument_parsing::Command_t;
using argument_parsing::execute;
using argument_parsing::help;

static const Command_t commands[] = {
    {"get",         "get the contents of an object in the repository", execute<GetCommand>, help<GetCommand>},
    {"put",         "set the contents of an object in the repository", execute<PutCommand>, help<PutCommand>},
    {}
};

int main(int argc, char* argv[]) {
    return argument_parsing::multiCommandDispatch(argc - 1, argv + 1, "example_args", commands);
}

#include <reflection/default_error_handler.cpp>

/*
[examples]$ ./example_args
usage: 'example_args <command> <arguments...>'
    OR 'example_args help <command>'
    OR 'example_args help'

[examples]$ ./example_args help
available commands:
    get get the contents of an object in the repository
    put set the contents of an object in the repository

type 'example_args help <command>' for more information about a specific command

[examples]$ ./example_args help get
usage: example_args get <objectName> -R <repository> [-o <outputFile>] [-S]
    <objectName>    name of the object to retrieve
    -R <repository> filename of the repository
    -o <outputFile> path to the output file (standard output if not specified)
    -S  actually show contents of object

[examples]$ ./example_args get
example_args: error: mandatory argument 'objectName' not specified

usage: example_args get <objectName> -R <repository> [-o <outputFile>] [-S]
[examples]$ ./example_args put Data -R test.bleb
Instance of class PutCommand:
std::string     PutCommand::objectName = Data
std::string     PutCommand::repository = test.bleb
std::string     PutCommand::inputFile = 
int64_t         PutCommand::size = 0

[examples]$ ./example_args put Data -R test.bleb -i Data.raw -s XYZ

ERROR `IntegerFormatError`: Specified value is not a valid integer.
[examples]$ ./example_args put Data -R test.bleb -i Data.raw -s 42
Instance of class PutCommand:
std::string     PutCommand::objectName = Data
std::string     PutCommand::repository = test.bleb
std::string     PutCommand::inputFile = Data.raw
int64_t         PutCommand::size = 42

[examples]$ 
*/