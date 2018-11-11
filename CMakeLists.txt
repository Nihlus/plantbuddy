cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_CXX_STANDARD 11)

# Set up toolchain
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_LIST_DIR}/cmake/Arduino-Toolchain.cmake)

set(ARDUINO_CMAKE_SKETCHBOOK_PATH /home/jarl/Arduino)
set(STANDARD_PORT /dev/ttyACM0)

# Set up included libraries
get_board_id(ARDUINO_BOARD_ID uno)

find_arduino_library(SSD1306 Adafruit_SSD1306 ${ARDUINO_BOARD_ID} 3RD_PARTY)
find_arduino_library(GFX Adafruit_GFX_Library ${ARDUINO_BOARD_ID} 3RD_PARTY)
link_arduino_library(SSD1306 GFX ${ARDUINO_BOARD_ID})

# Add subprojects
add_subdirectory(microui)
add_subdirectory(plantbuddy)
