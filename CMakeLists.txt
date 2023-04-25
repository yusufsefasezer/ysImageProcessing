cmake_minimum_required(VERSION 3.20)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(ysImageProcessing VERSION 0.0.1
					   DESCRIPTION "A simple Image Processing library developed with Modern C++."
					   LANGUAGES CXX)

include_directories(include)
include_directories(${LIBGD_INCLUDE_DIR})
find_package(LibGD REQUIRED)

set(SOURCES
	main.cpp
	src/App.cpp
	src/User.cpp
	include/App.h
	include/User.h
	include/Header.h)

add_library(ysImageProcessing ${SOURCES})