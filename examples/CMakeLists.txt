cmake_minimum_required(VERSION 3.20)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(ysImageProcessing_example VERSION 0.0.1
					   DESCRIPTION "A simple Image Processing library developed with Modern C++."
					   LANGUAGES CXX)

find_library(ysImageProcessing libysImageProcessing.so)

set(SOURCES main.cpp)

add_executable(ysImageProcessing_example ${SOURCES})

target_link_libraries(ysImageProcessing_example PRIVATE ${ysImageProcessing})
