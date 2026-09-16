cmake_minimum_required(VERSION 3.10)
project(Compiler)

add_executable(Com src/main.cpp src/reader.cpp)

target_include_directories(Com PUBLIC include)
