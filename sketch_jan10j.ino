int x = 6;
int y = 50;

void setup() {
  Serial.begin(9600);
  Serial.print(x);
  Serial.print("  ");
  Serial.print(y);
  Serial.println();
}

void loop() {
  x = x + 2;
  y = y - 2;
  delay(500);
  Serial.print(x);
  Serial.print("  ");
  Serial.print(y);
  Serial.println();
}
