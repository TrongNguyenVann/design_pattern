cmake_minimum_required(VERSION 3.5)
project(builder_pattern LANGUAGES CXX)
set (CMAKE_CXX_STANDARD 11)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
add_executable(builder
	src/CarBuilder.cpp
	src/Main.cpp
	src/MotorCycleBuilder.cpp
	src/VehicleBuilder.cpp
	src/Vehicle.cpp)
