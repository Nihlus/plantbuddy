project(microui)

add_arduino_library(${PROJECT_NAME} ${ARDUINO_BOARD_ID})

target_sources(${PROJECT_NAME}
    PRIVATE
    PUBLIC
)

target_include_directories(${PROJECT_NAME}
    INTERFACE
        include
)

find_arduino_library(SSD1306 Adafruit_SSD1306 ${ARDUINO_BOARD_ID} 3RD_PARTY)
find_arduino_library(GFX Adafruit_GFX_Library ${ARDUINO_BOARD_ID} 3RD_PARTY)
link_arduino_library(SSD1306 GFX ${ARDUINO_BOARD_ID})

link_arduino_library(${PROJECT_NAME} GFX ${ARDUINO_BOARD_ID})
link_arduino_library(${PROJECT_NAME} SSD1306 ${ARDUINO_BOARD_ID})
