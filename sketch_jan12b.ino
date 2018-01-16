int buttonPin = 7;
int ledPin = 11;
int x = 1;
int buttonState = 0;
int oldButtonState = LOW;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  int newButtonState = digitalRead(buttonPin);
  if (newButtonState == HIGH && oldButtonState == LOW) {
    if (x == 0) {
      digitalWrite(ledPin, HIGH);
      x = 1;
    } else {
      digitalWrite(ledPin, LOW);
      x = 0;
    }
  }
  oldButtonState = newButtonState;
}
