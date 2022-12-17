#include "pitches.h"
int melody[49] = {
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
NOTE_C2, NOTE_D2, NOTE_E2, NOTE_F2, NOTE_G2, NOTE_A2, NOTE_B2,
NOTE_C3, NOTE_D3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_B3,
NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4,
NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5,
NOTE_C6, NOTE_D6, NOTE_E6, NOTE_F6, NOTE_G6, NOTE_A6, NOTE_B6
};
int sensorValue = 0;
int sensorLow = 1023;
int sensorHigh = 0;
const int ledPin = 2;



void setup()
{
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, HIGH);
// Calibrate for the first five seconds after program runs
while(millis() < 5000)
{
sensorValue = analogRead(A0);
if(sensorValue > sensorHigh)
sensorHigh = sensorValue;
if(sensorValue < sensorLow)
sensorLow = sensorValue;
}
digitalWrite(ledPin, LOW);
}
void loop()
{
sensorValue = analogRead(A0);
int pitch = map(sensorValue, sensorLow, sensorHigh, 48, 0);
tone(22, melody[pitch], 50);
delay(50);
noTone(8);
delay(150);
}
