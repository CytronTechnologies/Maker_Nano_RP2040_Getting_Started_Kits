const int greenLedVehicle = 4;
const int yellowLedVehicle = 3;
const int redLedVehicle = 2;
const int greenLedPedestrian = 5;
const int redLedPedestrian = 6;
const int pushButton = 20;

void setup()
{
  pinMode(greenLedVehicle, OUTPUT);
  pinMode(yellowLedVehicle, OUTPUT);
  pinMode(redLedVehicle, OUTPUT);
  pinMode(greenLedPedestrian, OUTPUT);
  pinMode(redLedPedestrian, OUTPUT);
  pinMode(pushButton, INPUT);
  digitalWrite(greenLedVehicle, HIGH);
  digitalWrite(redLedPedestrian, HIGH);
}

void loop()
{
  if (digitalRead(pushButton) == LOW)
  {
    digitalWrite(greenLedVehicle, LOW);
    digitalWrite(yellowLedVehicle, HIGH);
    delay(2000);
    digitalWrite(yellowLedVehicle, LOW);
    digitalWrite(redLedVehicle, HIGH);
    delay(1000);
    digitalWrite(redLedPedestrian, LOW);
    digitalWrite(greenLedPedestrian, HIGH);
    delay(5000);
    digitalWrite(greenLedPedestrian, LOW);
    digitalWrite(redLedPedestrian, HIGH);
    delay(1000);
    digitalWrite(redLedVehicle, LOW);
    digitalWrite(greenLedVehicle, HIGH);
  }
}
