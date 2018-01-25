int sensePin = A0;
int sensorInput;
double temp;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorInput = analogRead(A0);
  temp = (double)sensorInput / 1024; //find percentage of input
  temp = temp * 5; //multiply by 5 to get voltage
  temp = temp * 100; //comment this line out to convert back to volts
  Serial.print("Current Temperature In °C: ");
  Serial.print(temp);
  Serial.print(" °C   Current Temperature In °F: ");
  temp = temp * 9/5;
  temp = temp + 32;
  Serial.print(temp);
  Serial.println(" °F");
  delay(200);
}
