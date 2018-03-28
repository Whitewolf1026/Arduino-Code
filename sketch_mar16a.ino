#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_MOSI   9
#define OLED_CLK   10
#define OLED_DC    11
#define OLED_CS    12
#define OLED_RESET 13
Adafruit_SSD1306 display(OLED_MOSI, OLED_CLK, OLED_DC, OLED_RESET, OLED_CS);

int hSpin = 30;
int vSpin = 32;
int SpinRadius = 50;

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC);

}

void loop() {
  for (int i = 0; i < 60; i++) {                 //Change loop to "for(int i=0; i<60; i++){" to spin clockwise
    display.fillRect(0, 0, 128, 64, BLACK);      //Blanks out last frame to black
    display.setTextColor(WHITE);
    display.setTextSize(3);
    display.setCursor(74, 5);                                      // Position of text
    display.print(i);
    display.fillCircle(hSpin, vSpin, SpinRadius / 2, WHITE);        // Draws a white filled circle
    display.fillCircle(hSpin, vSpin, (SpinRadius / 2) - 1 , BLACK); // draws a black circle to refresh line movement

    float SpinAngle = i * 6;
    SpinAngle = SpinAngle / 57.296;                                 // converts degrees to radians
    int a = (hSpin + (sin(SpinAngle) * (SpinRadius / 2)));          //coordinate for end of line position horizontally
    int b = (vSpin - (cos(SpinAngle) * (SpinRadius / 2)));          //coordinate for end of line position vertically

    display.drawLine(hSpin, vSpin, a, b, WHITE); // draws rotating line from center out to horizontal and vertical position.
    display.display();                       // refresh screen
    delay(10);

  }
}
