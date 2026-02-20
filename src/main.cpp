#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Radheshyam Ghosh
 * @date 2026-02-20
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
#define LDR_PIN A0

void setup() {

    // TODO 2:
    Serial.begin(9600);

    // TODO 3:
    while (!Serial);
}

void loop() {

    // TODO 5:
    int ldrRaw = analogRead(LDR_PIN);
    int lightPercent = map(ldrRaw, 0, 1023, 0, 100);

    // TODO 6:
    Serial.print("LDR Raw Value: ");
    Serial.print(ldrRaw);
    Serial.print(" | Light: ");
    Serial.print(lightPercent);
    Serial.println("%");

    // TODO 7:
    // Apply threshold logic (Bright / Dark detection)

    // TODO 8:
    // Print brightness status

    // TODO 9:
    // Add delay (500ms or 1 second)
}
