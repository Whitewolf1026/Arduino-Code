int forward = 1;
int reverse = 2;
int pause = 0;
int direction = 1;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  motor(forward);
  delay(3000);
  motor(pause);
  delay(3000);
  motor(reverse);
  delay(3000);
  motor(pause);
  delay(3000);
}

void motor(int direction) {
  if (direction == 1) {
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
  }
  else if (direction == 2) {
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(12, HIGH);
  }
  else if (direction == 0) {
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  }
}
