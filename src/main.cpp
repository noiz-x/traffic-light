#include <Arduino.h>

#define DELAY_TIME 1000
#define p9 9
#define p10 10
#define p11 11


void setup()
{
  pinMode(p9, OUTPUT);
  pinMode(p10, OUTPUT);
  pinMode(p11, OUTPUT);
}

void loop()
{
  analogWrite(p9, 255);
  delay(DELAY_TIME);
  analogWrite(p9, 50);

  analogWrite(p10, 255);
  delay(DELAY_TIME);
  analogWrite(p10, 50);

  analogWrite(p11, 255);
  delay(DELAY_TIME);
  analogWrite(p11, 50);
}
