cmake_minimum_required(VERSION 2.8)

project(PlantillasAuto)
add_executable(${PROJECT_NAME} "main.cpp")


include(CheckCXXCompilerFlag)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
