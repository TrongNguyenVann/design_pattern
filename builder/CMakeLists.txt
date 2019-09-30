cmake_minimum_required(VERSION 3.5)
project(builder_pattern LANGUAGES CXX
												DESCRIPTION "Builder design pattern")
set (CMAKE_CXX_STANDARD 11)
include_directories(include)
add_subdirectory(src)
add_executable(builder ${src_SRCS})