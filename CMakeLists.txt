cmake_minimum_required(VERSION 3.20)
project(game_console)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(
    game_console
    src/main.cpp
    src/utils/UuidV7.cpp
    src/core/base/GameObject.cpp
    src/core/base/Item.cpp
    src/core/item/WearableItem.cpp
    src/core/item/ConsummableItem.cpp
    src/core/item/QuestItem.cpp
    src/core/character/PlayerCharacter.cpp
    src/core/character/NPC.cpp
)

target_include_directories(game_console PUBLIC include)
