cmake_minimum_required(VERSION 3.16)
project(ValidNFakeData)

set(CMAKE_CXX_STANDARD 14)

include_directories(include src)

add_executable(ValidNFakeData main.cpp include/validation.h src/validation.cpp)