int x;

void setup() {
  // put your setup code here, to run once:
  pinMode(23, INPUT);
  Serial.begin(9600);
}

void loop() {
  x = analogRead(A0);
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);
  Serial.print("Voltage value: ");
  Serial.print(voltage);
  Serial.print("  ");
  Serial.print("Analog value: ");
  Serial.println(x);
  delay(500);
}
