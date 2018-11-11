project(microui)

add_arduino_library(${PROJECT_NAME} ${ARDUINO_BOARD_ID} include/dummy.h)

target_sources(${PROJECT_NAME}
    PRIVATE
    PUBLIC
)

target_include_directories(${PROJECT_NAME}
    INTERFACE
        include
)

link_arduino_library(${PROJECT_NAME} GFX ${ARDUINO_BOARD_ID})
link_arduino_library(${PROJECT_NAME} SSD1306 ${ARDUINO_BOARD_ID})
