cmake_minimum_required(VERSION 3.8)
project(reflector)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(example_args
        examples/example_args.cpp
        include/reflection/default_error_handler.cpp)

add_executable(example_config
        examples/example_config.cpp
        include/reflection/default_error_handler.cpp)

add_executable(example_di
        examples/example_di.cpp
        include/reflection/default_di_manager.cpp
        include/reflection/default_error_handler.cpp)

add_executable(example_dump_serialization
        examples/example_dump_serialization.cpp
        include/reflection/default_error_handler.cpp)

add_executable(example_rm
        examples/example_rm.cpp)

add_executable(example_rpc
        examples/example_rpc.cpp
        include/reflection/default_error_handler.cpp)

add_executable(example_serialization
        examples/example_serialization.cpp
        include/reflection/default_error_handler.cpp)

add_executable(example_vector
        examples/example_vector.cpp
        include/reflection/default_error_handler.cpp)
