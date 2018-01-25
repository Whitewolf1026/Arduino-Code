unsigned long duration[7];
int count, next, last;

void setup() {
  pinmode(7, INPUT_PULLUP);
}

void loop() {
  int y = digitalWrite(7);

  if (y == LOW) {
    next = millis();
    duration[count++] = next - last;
    last = next;
    tone(8, 440, 100);
    delay(200);
  }
  if (count == 5) {
    delay(1000);
    for (int x = 1; x <= 5; x++) {
      tone(8, 440, 100);
      delay(duration[x]);
    }
    count = 0;
  }
}

