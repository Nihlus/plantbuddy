project(plantbuddy)

add_arduino_executable(${PROJECT_NAME} ${ARDUINO_BOARD_ID})
upload_arduino_target(${PROJECT_NAME} ${ARDUINO_BOARD_ID} ${STANDARD_PORT})

target_sources(${PROJECT_NAME}
    PRIVATE
        main.cpp
    PUBLIC
)


find_arduino_library(SSD1306 Adafruit_SSD1306 ${ARDUINO_BOARD_ID} 3RD_PARTY)
find_arduino_library(GFX Adafruit_GFX_Library ${ARDUINO_BOARD_ID} 3RD_PARTY)
link_arduino_library(SSD1306 GFX ${ARDUINO_BOARD_ID})

find_arduino_library(HygrometerSensor HygrometerSensor ${ARDUINO_BOARD_ID} 3RD_PARTY)


link_arduino_library(${PROJECT_NAME} GFX ${ARDUINO_BOARD_ID})
link_arduino_library(${PROJECT_NAME} SSD1306 ${ARDUINO_BOARD_ID})
link_arduino_library(${PROJECT_NAME} HygrometerSensor ${ARDUINO_BOARD_ID})
link_arduino_library(${PROJECT_NAME} microui ${ARDUINO_BOARD_ID})