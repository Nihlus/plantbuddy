cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_CXX_STANDARD 11)

# Set up toolchain
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_LIST_DIR}/cmake/Arduino-Toolchain.cmake)

set(ARDUINO_CMAKE_SKETCHBOOK_PATH /home/jarl/Arduino)
set(STANDARD_PORT /dev/ttyACM0)

# Set up meta project
project(plantbuddy-meta)

# Set up included libraries
get_board_id(ARDUINO_BOARD_ID uno)

# Add subprojects
add_subdirectory(microui)
add_subdirectory(plantbuddy)
