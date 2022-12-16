#define TONEPIN 22

void setup() {
}

void loop() {
  for (int i = 100; i < 10000; i += 1) 
  {
    tone(TONEPIN, i);
    delayMicroseconds(20);
  }
}
