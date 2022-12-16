void setup() {
 pinMode(20, INPUT_PULLUP);
 pinMode(2, OUTPUT);
}

void loop() {
 if (digitalRead(20)==LOW) {
 while(1) {
  analogWrite(2, 255);
  delay(3000);
  analogWrite(2, 80);
  delay(3000);
  }
 }
else digitalWrite(2, LOW);
}
