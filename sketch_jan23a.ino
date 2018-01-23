#include <IRremote.h>

int RECV_PIN = 11;

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()
{
  pinMode(8, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn(); // Start the receiver
  Serial.println("Enabled IRin");
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    if (results.value == 0xFD08F7) {
      Serial.println("LED On");
      digitalWrite(8, HIGH);
    }
    if (results.value == 0xFD8877) {
      Serial.println("LED Off");
      digitalWrite(8, LOW);
    }
  }
  irrecv.resume();
  delay(100);
}
