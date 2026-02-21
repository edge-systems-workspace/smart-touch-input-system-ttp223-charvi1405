#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author Charvi Mittal
 * @date 2026-02-19
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */
int touchPin = 2;
int ledPin = 13;

void setup() {
    pinMode(touchPin, INPUT);

    pinMode(ledPin, OUTPUT);

    Serial.begin(9600);

}

void loop() {
    int touchState = digitalRead(touchPin);

    // TODO 7:
    // If touch detected (HIGH)
    //     Print "Touch Detected"
    // Else
    //     Print "No Touch"

    // TODO 8:
    // Add small delay (200–500ms)
}
