int pushButton = 7;
int Button = 8;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(7, INPUT);
  pinMode(8, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(7);
  int button2State = digitalRead(8);
  // print out the state of the button:
  Serial.print(buttonState);
  Serial.print("  ");
  Serial.print(button2State);
  Serial.println();
  delay(10);        // delay in between reads for stability
}
