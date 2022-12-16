int sensorPin = A0;
int ledPin = 2;
int sensorValue = 0;
void setup()
{
pinMode(ledPin, OUTPUT);
}
void loop()
{
 sensorValue = analogRead(sensorPin);
 if(sensorValue > 900)
   digitalWrite(ledPin, HIGH);
 else
   digitalWrite(ledPin, LOW);
}
