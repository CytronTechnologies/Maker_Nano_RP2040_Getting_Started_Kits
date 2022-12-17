#define TONEPIN 22

int celcius = 0;

void setup() {
  pinMode(D2, OUTPUT);
  Serial.begin(115200);
  delay(5000);
}

void loop() {
  celcius = analogReadTemp() ; 
  if (celcius > 41)
  {
       digitalWrite(D2, HIGH);
       delay(500);
       digitalWrite(D2, LOW);
       for (int i = 100; i < 10000; i += 1) 
  {
    tone(TONEPIN, i);
    delayMicroseconds(20);

    }
  }
}
