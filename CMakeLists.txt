cmake_minimum_required(VERSION 3.5)

project(Hello_algo)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

set (source_dir "${PROJECT_SOURCE_DIR}/src/")

include_directories(${CMAKE_SOURCE_DIR}/include)

file (GLOB source_files "${source_dir}/*.cpp")

add_executable (Hello_algo ${source_files})