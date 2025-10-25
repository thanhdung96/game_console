cmake_minimum_required(VERSION 3.20)
project(game_console)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(game_console src/main.cpp src/utils/UuidV7.cpp src/core/base/GameObject.cpp)

target_include_directories(game_console PUBLIC include)
