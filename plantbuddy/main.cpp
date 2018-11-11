//
//  MetricClock.ino
//
//  Author:
//       Jarl Gullberg <jarl.gullberg@gmail.com>
//
//  Copyright (c) 2017 Jarl Gullberg
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <HygrometerSensor.h>

const int OLED_RESET = 4;
Adafruit_SSD1306 display(OLED_RESET);

HygrometerSensor soil1(HygrometerSensor::ANALOG, A0);

void setup()
{
    display.begin(SSD1306_SWITCHCAPVCC, SSD1306_I2C_ADDRESS);
    display.clearDisplay();

    display.setTextColor(WHITE);

    display.display();

    // Set up hygrometer
    soil1.setAnalogParameters(200, ANALOG_HUMIDITY_MAX, ANALOG_IS_HUMID);
}

void loop()
{
    display.clearDisplay();

    display.display();
}
