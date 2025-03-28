#include <Arduino.h>

#define POT_PIN A5
#define LED_PIN 11

void setup()
{
  pinMode(POT_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  int potValue = analogRead(POT_PIN);
  // Serial.println(potValue);

  // Map the analog value (0-1023) to PWM range (0-255)
  int brightness = map(potValue, 0, 1023, 0, 255);
  analogWrite(LED_PIN, brightness);
  Serial.println(map(potValue, 0, 1023, 0.0, 5.0));

  delay(100);
}
