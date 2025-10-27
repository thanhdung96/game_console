cmake_minimum_required(VERSION 3.20)
project(game_console)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(src/SOURCES.cmake) # sets MYPROJECT_SOURCES variable

add_executable(
    game_console
    ${MYPROJECT_SOURCES}
)

target_include_directories(game_console PUBLIC include)
