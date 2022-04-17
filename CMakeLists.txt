cmake_minimum_required(VERSION 3.22)
project(rpc)

set(CMAKE_CXX_STANDARD 14)

add_executable(rpc main.cpp test/protobuf/main.cpp)
