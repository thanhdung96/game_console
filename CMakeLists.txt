cmake_minimum_required(VERSION 3.20)
project(manjaro)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(manjaro src/main.cpp)

target_include_directories(manjaro PUBLIC include)
