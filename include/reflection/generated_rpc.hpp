#pragma once

// Generated by gen_rpc_header.py

#include "function.hpp"

namespace rpc {

#define RPC_SERIALIZED_0(localName_, functionName_)\
inline decltype(::reflection::returnValueOf(functionName_)) localName_(\
) {\
    return ::rpc::rpcSerializedCall<decltype(::reflection::returnValueOf(functionName_))>(\
             #functionName_);\
}

template <typename Return>
Return rpcSerializedCall(
        const char* functionName) {
    IWriter* writer;
    IReader* reader;

    assert(beginRPC(functionName, writer, reader));

    assert(invokeRPC());

    Return result;
    assert(reflectDeserialize(result, reader));

    endRPC();
    return result;
}

template <typename Return>
bool rpcSerializedExecute(Return (*function)(), IReader* reader, IWriter* writer) {
    const Return result = function();

    if (!reflectSerialize(result, writer)) return false;

    return true;
}

#define RPC_SERIALIZED_1(localName_, functionName_)\
inline decltype(::reflection::returnValueOf(functionName_)) localName_(\
        decltype(::reflection::arg0TypeIn(functionName_)) const& arg0) {\
    return ::rpc::rpcSerializedCall<decltype(::reflection::returnValueOf(functionName_))>(\
             #functionName_, arg0);\
}

template <typename Return, typename Arg0>
Return rpcSerializedCall(
        const char* functionName, Arg0 const& arg0) {
    IWriter* writer;
    IReader* reader;

    assert(beginRPC(functionName, writer, reader));

    assert(reflectSerialize(arg0, writer));

    assert(invokeRPC());

    Return result;
    assert(reflectDeserialize(result, reader));

    endRPC();
    return result;
}

template <typename Return, typename Arg0>
bool rpcSerializedExecute(Return (*function)(Arg0), IReader* reader, IWriter* writer) {
    typename std::remove_cv<typename std::remove_reference<Arg0>::type>::type arg0;

    if (!reflectDeserialize(arg0, reader)) return false;

    const Return result = function(arg0);

    if (!reflectSerialize(result, writer)) return false;

    return true;
}

#define RPC_SERIALIZED_2(localName_, functionName_)\
inline decltype(::reflection::returnValueOf(functionName_)) localName_(\
        decltype(::reflection::arg0TypeIn(functionName_)) const& arg0,\
        decltype(::reflection::arg1TypeIn(functionName_)) const& arg1) {\
    return ::rpc::rpcSerializedCall<decltype(::reflection::returnValueOf(functionName_))>(\
             #functionName_, arg0, arg1);\
}

template <typename Return, typename Arg0, typename Arg1>
Return rpcSerializedCall(
        const char* functionName, Arg0 const& arg0, Arg1 const& arg1) {
    IWriter* writer;
    IReader* reader;

    assert(beginRPC(functionName, writer, reader));

    assert(reflectSerialize(arg0, writer));
    assert(reflectSerialize(arg1, writer));

    assert(invokeRPC());

    Return result;
    assert(reflectDeserialize(result, reader));

    endRPC();
    return result;
}

template <typename Return, typename Arg0, typename Arg1>
bool rpcSerializedExecute(Return (*function)(Arg0, Arg1), IReader* reader, IWriter* writer) {
    typename std::remove_cv<typename std::remove_reference<Arg0>::type>::type arg0;
    typename std::remove_cv<typename std::remove_reference<Arg1>::type>::type arg1;

    if (!reflectDeserialize(arg0, reader)) return false;
    if (!reflectDeserialize(arg1, reader)) return false;

    const Return result = function(arg0, arg1);

    if (!reflectSerialize(result, writer)) return false;

    return true;
}

#define RPC_SERIALIZED_3(localName_, functionName_)\
inline decltype(::reflection::returnValueOf(functionName_)) localName_(\
        decltype(::reflection::arg0TypeIn(functionName_)) const& arg0,\
        decltype(::reflection::arg1TypeIn(functionName_)) const& arg1,\
        decltype(::reflection::arg2TypeIn(functionName_)) const& arg2) {\
    return ::rpc::rpcSerializedCall<decltype(::reflection::returnValueOf(functionName_))>(\
             #functionName_, arg0, arg1, arg2);\
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2>
Return rpcSerializedCall(
        const char* functionName, Arg0 const& arg0, Arg1 const& arg1, Arg2 const& arg2) {
    IWriter* writer;
    IReader* reader;

    assert(beginRPC(functionName, writer, reader));

    assert(reflectSerialize(arg0, writer));
    assert(reflectSerialize(arg1, writer));
    assert(reflectSerialize(arg2, writer));

    assert(invokeRPC());

    Return result;
    assert(reflectDeserialize(result, reader));

    endRPC();
    return result;
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2>
bool rpcSerializedExecute(Return (*function)(Arg0, Arg1, Arg2), IReader* reader, IWriter* writer) {
    typename std::remove_cv<typename std::remove_reference<Arg0>::type>::type arg0;
    typename std::remove_cv<typename std::remove_reference<Arg1>::type>::type arg1;
    typename std::remove_cv<typename std::remove_reference<Arg2>::type>::type arg2;

    if (!reflectDeserialize(arg0, reader)) return false;
    if (!reflectDeserialize(arg1, reader)) return false;
    if (!reflectDeserialize(arg2, reader)) return false;

    const Return result = function(arg0, arg1, arg2);

    if (!reflectSerialize(result, writer)) return false;

    return true;
}

#define RPC_SERIALIZED_4(localName_, functionName_)\
inline decltype(::reflection::returnValueOf(functionName_)) localName_(\
        decltype(::reflection::arg0TypeIn(functionName_)) const& arg0,\
        decltype(::reflection::arg1TypeIn(functionName_)) const& arg1,\
        decltype(::reflection::arg2TypeIn(functionName_)) const& arg2,\
        decltype(::reflection::arg3TypeIn(functionName_)) const& arg3) {\
    return ::rpc::rpcSerializedCall<decltype(::reflection::returnValueOf(functionName_))>(\
             #functionName_, arg0, arg1, arg2, arg3);\
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3>
Return rpcSerializedCall(
        const char* functionName, Arg0 const& arg0, Arg1 const& arg1, Arg2 const& arg2, Arg3 const& arg3) {
    IWriter* writer;
    IReader* reader;

    assert(beginRPC(functionName, writer, reader));

    assert(reflectSerialize(arg0, writer));
    assert(reflectSerialize(arg1, writer));
    assert(reflectSerialize(arg2, writer));
    assert(reflectSerialize(arg3, writer));

    assert(invokeRPC());

    Return result;
    assert(reflectDeserialize(result, reader));

    endRPC();
    return result;
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3>
bool rpcSerializedExecute(Return (*function)(Arg0, Arg1, Arg2, Arg3), IReader* reader, IWriter* writer) {
    typename std::remove_cv<typename std::remove_reference<Arg0>::type>::type arg0;
    typename std::remove_cv<typename std::remove_reference<Arg1>::type>::type arg1;
    typename std::remove_cv<typename std::remove_reference<Arg2>::type>::type arg2;
    typename std::remove_cv<typename std::remove_reference<Arg3>::type>::type arg3;

    if (!reflectDeserialize(arg0, reader)) return false;
    if (!reflectDeserialize(arg1, reader)) return false;
    if (!reflectDeserialize(arg2, reader)) return false;
    if (!reflectDeserialize(arg3, reader)) return false;

    const Return result = function(arg0, arg1, arg2, arg3);

    if (!reflectSerialize(result, writer)) return false;

    return true;
}

#define RPC_SERIALIZED_5(localName_, functionName_)\
inline decltype(::reflection::returnValueOf(functionName_)) localName_(\
        decltype(::reflection::arg0TypeIn(functionName_)) const& arg0,\
        decltype(::reflection::arg1TypeIn(functionName_)) const& arg1,\
        decltype(::reflection::arg2TypeIn(functionName_)) const& arg2,\
        decltype(::reflection::arg3TypeIn(functionName_)) const& arg3,\
        decltype(::reflection::arg4TypeIn(functionName_)) const& arg4) {\
    return ::rpc::rpcSerializedCall<decltype(::reflection::returnValueOf(functionName_))>(\
             #functionName_, arg0, arg1, arg2, arg3, arg4);\
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3, typename Arg4>
Return rpcSerializedCall(
        const char* functionName, Arg0 const& arg0, Arg1 const& arg1, Arg2 const& arg2, Arg3 const& arg3, Arg4 const& arg4) {
    IWriter* writer;
    IReader* reader;

    assert(beginRPC(functionName, writer, reader));

    assert(reflectSerialize(arg0, writer));
    assert(reflectSerialize(arg1, writer));
    assert(reflectSerialize(arg2, writer));
    assert(reflectSerialize(arg3, writer));
    assert(reflectSerialize(arg4, writer));

    assert(invokeRPC());

    Return result;
    assert(reflectDeserialize(result, reader));

    endRPC();
    return result;
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3, typename Arg4>
bool rpcSerializedExecute(Return (*function)(Arg0, Arg1, Arg2, Arg3, Arg4), IReader* reader, IWriter* writer) {
    typename std::remove_cv<typename std::remove_reference<Arg0>::type>::type arg0;
    typename std::remove_cv<typename std::remove_reference<Arg1>::type>::type arg1;
    typename std::remove_cv<typename std::remove_reference<Arg2>::type>::type arg2;
    typename std::remove_cv<typename std::remove_reference<Arg3>::type>::type arg3;
    typename std::remove_cv<typename std::remove_reference<Arg4>::type>::type arg4;

    if (!reflectDeserialize(arg0, reader)) return false;
    if (!reflectDeserialize(arg1, reader)) return false;
    if (!reflectDeserialize(arg2, reader)) return false;
    if (!reflectDeserialize(arg3, reader)) return false;
    if (!reflectDeserialize(arg4, reader)) return false;

    const Return result = function(arg0, arg1, arg2, arg3, arg4);

    if (!reflectSerialize(result, writer)) return false;

    return true;
}

#define RPC_SERIALIZED_6(localName_, functionName_)\
inline decltype(::reflection::returnValueOf(functionName_)) localName_(\
        decltype(::reflection::arg0TypeIn(functionName_)) const& arg0,\
        decltype(::reflection::arg1TypeIn(functionName_)) const& arg1,\
        decltype(::reflection::arg2TypeIn(functionName_)) const& arg2,\
        decltype(::reflection::arg3TypeIn(functionName_)) const& arg3,\
        decltype(::reflection::arg4TypeIn(functionName_)) const& arg4,\
        decltype(::reflection::arg5TypeIn(functionName_)) const& arg5) {\
    return ::rpc::rpcSerializedCall<decltype(::reflection::returnValueOf(functionName_))>(\
             #functionName_, arg0, arg1, arg2, arg3, arg4, arg5);\
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5>
Return rpcSerializedCall(
        const char* functionName, Arg0 const& arg0, Arg1 const& arg1, Arg2 const& arg2, Arg3 const& arg3, Arg4 const& arg4, Arg5 const& arg5) {
    IWriter* writer;
    IReader* reader;

    assert(beginRPC(functionName, writer, reader));

    assert(reflectSerialize(arg0, writer));
    assert(reflectSerialize(arg1, writer));
    assert(reflectSerialize(arg2, writer));
    assert(reflectSerialize(arg3, writer));
    assert(reflectSerialize(arg4, writer));
    assert(reflectSerialize(arg5, writer));

    assert(invokeRPC());

    Return result;
    assert(reflectDeserialize(result, reader));

    endRPC();
    return result;
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5>
bool rpcSerializedExecute(Return (*function)(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5), IReader* reader, IWriter* writer) {
    typename std::remove_cv<typename std::remove_reference<Arg0>::type>::type arg0;
    typename std::remove_cv<typename std::remove_reference<Arg1>::type>::type arg1;
    typename std::remove_cv<typename std::remove_reference<Arg2>::type>::type arg2;
    typename std::remove_cv<typename std::remove_reference<Arg3>::type>::type arg3;
    typename std::remove_cv<typename std::remove_reference<Arg4>::type>::type arg4;
    typename std::remove_cv<typename std::remove_reference<Arg5>::type>::type arg5;

    if (!reflectDeserialize(arg0, reader)) return false;
    if (!reflectDeserialize(arg1, reader)) return false;
    if (!reflectDeserialize(arg2, reader)) return false;
    if (!reflectDeserialize(arg3, reader)) return false;
    if (!reflectDeserialize(arg4, reader)) return false;
    if (!reflectDeserialize(arg5, reader)) return false;

    const Return result = function(arg0, arg1, arg2, arg3, arg4, arg5);

    if (!reflectSerialize(result, writer)) return false;

    return true;
}

#define RPC_SERIALIZED_7(localName_, functionName_)\
inline decltype(::reflection::returnValueOf(functionName_)) localName_(\
        decltype(::reflection::arg0TypeIn(functionName_)) const& arg0,\
        decltype(::reflection::arg1TypeIn(functionName_)) const& arg1,\
        decltype(::reflection::arg2TypeIn(functionName_)) const& arg2,\
        decltype(::reflection::arg3TypeIn(functionName_)) const& arg3,\
        decltype(::reflection::arg4TypeIn(functionName_)) const& arg4,\
        decltype(::reflection::arg5TypeIn(functionName_)) const& arg5,\
        decltype(::reflection::arg6TypeIn(functionName_)) const& arg6) {\
    return ::rpc::rpcSerializedCall<decltype(::reflection::returnValueOf(functionName_))>(\
             #functionName_, arg0, arg1, arg2, arg3, arg4, arg5, arg6);\
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6>
Return rpcSerializedCall(
        const char* functionName, Arg0 const& arg0, Arg1 const& arg1, Arg2 const& arg2, Arg3 const& arg3, Arg4 const& arg4, Arg5 const& arg5, Arg6 const& arg6) {
    IWriter* writer;
    IReader* reader;

    assert(beginRPC(functionName, writer, reader));

    assert(reflectSerialize(arg0, writer));
    assert(reflectSerialize(arg1, writer));
    assert(reflectSerialize(arg2, writer));
    assert(reflectSerialize(arg3, writer));
    assert(reflectSerialize(arg4, writer));
    assert(reflectSerialize(arg5, writer));
    assert(reflectSerialize(arg6, writer));

    assert(invokeRPC());

    Return result;
    assert(reflectDeserialize(result, reader));

    endRPC();
    return result;
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6>
bool rpcSerializedExecute(Return (*function)(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), IReader* reader, IWriter* writer) {
    typename std::remove_cv<typename std::remove_reference<Arg0>::type>::type arg0;
    typename std::remove_cv<typename std::remove_reference<Arg1>::type>::type arg1;
    typename std::remove_cv<typename std::remove_reference<Arg2>::type>::type arg2;
    typename std::remove_cv<typename std::remove_reference<Arg3>::type>::type arg3;
    typename std::remove_cv<typename std::remove_reference<Arg4>::type>::type arg4;
    typename std::remove_cv<typename std::remove_reference<Arg5>::type>::type arg5;
    typename std::remove_cv<typename std::remove_reference<Arg6>::type>::type arg6;

    if (!reflectDeserialize(arg0, reader)) return false;
    if (!reflectDeserialize(arg1, reader)) return false;
    if (!reflectDeserialize(arg2, reader)) return false;
    if (!reflectDeserialize(arg3, reader)) return false;
    if (!reflectDeserialize(arg4, reader)) return false;
    if (!reflectDeserialize(arg5, reader)) return false;
    if (!reflectDeserialize(arg6, reader)) return false;

    const Return result = function(arg0, arg1, arg2, arg3, arg4, arg5, arg6);

    if (!reflectSerialize(result, writer)) return false;

    return true;
}

#define RPC_SERIALIZED_8(localName_, functionName_)\
inline decltype(::reflection::returnValueOf(functionName_)) localName_(\
        decltype(::reflection::arg0TypeIn(functionName_)) const& arg0,\
        decltype(::reflection::arg1TypeIn(functionName_)) const& arg1,\
        decltype(::reflection::arg2TypeIn(functionName_)) const& arg2,\
        decltype(::reflection::arg3TypeIn(functionName_)) const& arg3,\
        decltype(::reflection::arg4TypeIn(functionName_)) const& arg4,\
        decltype(::reflection::arg5TypeIn(functionName_)) const& arg5,\
        decltype(::reflection::arg6TypeIn(functionName_)) const& arg6,\
        decltype(::reflection::arg7TypeIn(functionName_)) const& arg7) {\
    return ::rpc::rpcSerializedCall<decltype(::reflection::returnValueOf(functionName_))>(\
             #functionName_, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);\
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7>
Return rpcSerializedCall(
        const char* functionName, Arg0 const& arg0, Arg1 const& arg1, Arg2 const& arg2, Arg3 const& arg3, Arg4 const& arg4, Arg5 const& arg5, Arg6 const& arg6, Arg7 const& arg7) {
    IWriter* writer;
    IReader* reader;

    assert(beginRPC(functionName, writer, reader));

    assert(reflectSerialize(arg0, writer));
    assert(reflectSerialize(arg1, writer));
    assert(reflectSerialize(arg2, writer));
    assert(reflectSerialize(arg3, writer));
    assert(reflectSerialize(arg4, writer));
    assert(reflectSerialize(arg5, writer));
    assert(reflectSerialize(arg6, writer));
    assert(reflectSerialize(arg7, writer));

    assert(invokeRPC());

    Return result;
    assert(reflectDeserialize(result, reader));

    endRPC();
    return result;
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7>
bool rpcSerializedExecute(Return (*function)(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), IReader* reader, IWriter* writer) {
    typename std::remove_cv<typename std::remove_reference<Arg0>::type>::type arg0;
    typename std::remove_cv<typename std::remove_reference<Arg1>::type>::type arg1;
    typename std::remove_cv<typename std::remove_reference<Arg2>::type>::type arg2;
    typename std::remove_cv<typename std::remove_reference<Arg3>::type>::type arg3;
    typename std::remove_cv<typename std::remove_reference<Arg4>::type>::type arg4;
    typename std::remove_cv<typename std::remove_reference<Arg5>::type>::type arg5;
    typename std::remove_cv<typename std::remove_reference<Arg6>::type>::type arg6;
    typename std::remove_cv<typename std::remove_reference<Arg7>::type>::type arg7;

    if (!reflectDeserialize(arg0, reader)) return false;
    if (!reflectDeserialize(arg1, reader)) return false;
    if (!reflectDeserialize(arg2, reader)) return false;
    if (!reflectDeserialize(arg3, reader)) return false;
    if (!reflectDeserialize(arg4, reader)) return false;
    if (!reflectDeserialize(arg5, reader)) return false;
    if (!reflectDeserialize(arg6, reader)) return false;
    if (!reflectDeserialize(arg7, reader)) return false;

    const Return result = function(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);

    if (!reflectSerialize(result, writer)) return false;

    return true;
}

#define RPC_SERIALIZED_9(localName_, functionName_)\
inline decltype(::reflection::returnValueOf(functionName_)) localName_(\
        decltype(::reflection::arg0TypeIn(functionName_)) const& arg0,\
        decltype(::reflection::arg1TypeIn(functionName_)) const& arg1,\
        decltype(::reflection::arg2TypeIn(functionName_)) const& arg2,\
        decltype(::reflection::arg3TypeIn(functionName_)) const& arg3,\
        decltype(::reflection::arg4TypeIn(functionName_)) const& arg4,\
        decltype(::reflection::arg5TypeIn(functionName_)) const& arg5,\
        decltype(::reflection::arg6TypeIn(functionName_)) const& arg6,\
        decltype(::reflection::arg7TypeIn(functionName_)) const& arg7,\
        decltype(::reflection::arg8TypeIn(functionName_)) const& arg8) {\
    return ::rpc::rpcSerializedCall<decltype(::reflection::returnValueOf(functionName_))>(\
             #functionName_, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);\
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8>
Return rpcSerializedCall(
        const char* functionName, Arg0 const& arg0, Arg1 const& arg1, Arg2 const& arg2, Arg3 const& arg3, Arg4 const& arg4, Arg5 const& arg5, Arg6 const& arg6, Arg7 const& arg7, Arg8 const& arg8) {
    IWriter* writer;
    IReader* reader;

    assert(beginRPC(functionName, writer, reader));

    assert(reflectSerialize(arg0, writer));
    assert(reflectSerialize(arg1, writer));
    assert(reflectSerialize(arg2, writer));
    assert(reflectSerialize(arg3, writer));
    assert(reflectSerialize(arg4, writer));
    assert(reflectSerialize(arg5, writer));
    assert(reflectSerialize(arg6, writer));
    assert(reflectSerialize(arg7, writer));
    assert(reflectSerialize(arg8, writer));

    assert(invokeRPC());

    Return result;
    assert(reflectDeserialize(result, reader));

    endRPC();
    return result;
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8>
bool rpcSerializedExecute(Return (*function)(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), IReader* reader, IWriter* writer) {
    typename std::remove_cv<typename std::remove_reference<Arg0>::type>::type arg0;
    typename std::remove_cv<typename std::remove_reference<Arg1>::type>::type arg1;
    typename std::remove_cv<typename std::remove_reference<Arg2>::type>::type arg2;
    typename std::remove_cv<typename std::remove_reference<Arg3>::type>::type arg3;
    typename std::remove_cv<typename std::remove_reference<Arg4>::type>::type arg4;
    typename std::remove_cv<typename std::remove_reference<Arg5>::type>::type arg5;
    typename std::remove_cv<typename std::remove_reference<Arg6>::type>::type arg6;
    typename std::remove_cv<typename std::remove_reference<Arg7>::type>::type arg7;
    typename std::remove_cv<typename std::remove_reference<Arg8>::type>::type arg8;

    if (!reflectDeserialize(arg0, reader)) return false;
    if (!reflectDeserialize(arg1, reader)) return false;
    if (!reflectDeserialize(arg2, reader)) return false;
    if (!reflectDeserialize(arg3, reader)) return false;
    if (!reflectDeserialize(arg4, reader)) return false;
    if (!reflectDeserialize(arg5, reader)) return false;
    if (!reflectDeserialize(arg6, reader)) return false;
    if (!reflectDeserialize(arg7, reader)) return false;
    if (!reflectDeserialize(arg8, reader)) return false;

    const Return result = function(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);

    if (!reflectSerialize(result, writer)) return false;

    return true;
}

#define RPC_SERIALIZED_10(localName_, functionName_)\
inline decltype(::reflection::returnValueOf(functionName_)) localName_(\
        decltype(::reflection::arg0TypeIn(functionName_)) const& arg0,\
        decltype(::reflection::arg1TypeIn(functionName_)) const& arg1,\
        decltype(::reflection::arg2TypeIn(functionName_)) const& arg2,\
        decltype(::reflection::arg3TypeIn(functionName_)) const& arg3,\
        decltype(::reflection::arg4TypeIn(functionName_)) const& arg4,\
        decltype(::reflection::arg5TypeIn(functionName_)) const& arg5,\
        decltype(::reflection::arg6TypeIn(functionName_)) const& arg6,\
        decltype(::reflection::arg7TypeIn(functionName_)) const& arg7,\
        decltype(::reflection::arg8TypeIn(functionName_)) const& arg8,\
        decltype(::reflection::arg9TypeIn(functionName_)) const& arg9) {\
    return ::rpc::rpcSerializedCall<decltype(::reflection::returnValueOf(functionName_))>(\
             #functionName_, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);\
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9>
Return rpcSerializedCall(
        const char* functionName, Arg0 const& arg0, Arg1 const& arg1, Arg2 const& arg2, Arg3 const& arg3, Arg4 const& arg4, Arg5 const& arg5, Arg6 const& arg6, Arg7 const& arg7, Arg8 const& arg8, Arg9 const& arg9) {
    IWriter* writer;
    IReader* reader;

    assert(beginRPC(functionName, writer, reader));

    assert(reflectSerialize(arg0, writer));
    assert(reflectSerialize(arg1, writer));
    assert(reflectSerialize(arg2, writer));
    assert(reflectSerialize(arg3, writer));
    assert(reflectSerialize(arg4, writer));
    assert(reflectSerialize(arg5, writer));
    assert(reflectSerialize(arg6, writer));
    assert(reflectSerialize(arg7, writer));
    assert(reflectSerialize(arg8, writer));
    assert(reflectSerialize(arg9, writer));

    assert(invokeRPC());

    Return result;
    assert(reflectDeserialize(result, reader));

    endRPC();
    return result;
}

template <typename Return, typename Arg0, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9>
bool rpcSerializedExecute(Return (*function)(Arg0, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), IReader* reader, IWriter* writer) {
    typename std::remove_cv<typename std::remove_reference<Arg0>::type>::type arg0;
    typename std::remove_cv<typename std::remove_reference<Arg1>::type>::type arg1;
    typename std::remove_cv<typename std::remove_reference<Arg2>::type>::type arg2;
    typename std::remove_cv<typename std::remove_reference<Arg3>::type>::type arg3;
    typename std::remove_cv<typename std::remove_reference<Arg4>::type>::type arg4;
    typename std::remove_cv<typename std::remove_reference<Arg5>::type>::type arg5;
    typename std::remove_cv<typename std::remove_reference<Arg6>::type>::type arg6;
    typename std::remove_cv<typename std::remove_reference<Arg7>::type>::type arg7;
    typename std::remove_cv<typename std::remove_reference<Arg8>::type>::type arg8;
    typename std::remove_cv<typename std::remove_reference<Arg9>::type>::type arg9;

    if (!reflectDeserialize(arg0, reader)) return false;
    if (!reflectDeserialize(arg1, reader)) return false;
    if (!reflectDeserialize(arg2, reader)) return false;
    if (!reflectDeserialize(arg3, reader)) return false;
    if (!reflectDeserialize(arg4, reader)) return false;
    if (!reflectDeserialize(arg5, reader)) return false;
    if (!reflectDeserialize(arg6, reader)) return false;
    if (!reflectDeserialize(arg7, reader)) return false;
    if (!reflectDeserialize(arg8, reader)) return false;
    if (!reflectDeserialize(arg9, reader)) return false;

    const Return result = function(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);

    if (!reflectSerialize(result, writer)) return false;

    return true;
}

}
