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
    if (touchState == HIGH) {
        digitalWrite(ledPin, HIGH);
        Serial.println("Touch Detected");

    }
    else
    {
        digitalWrite(ledPin, LOW);
        Serial.println("No Touch");
    }
    delay(200);

}
