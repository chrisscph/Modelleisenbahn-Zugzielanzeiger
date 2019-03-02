#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
 
Adafruit_SSD1306 display(4);

void initDisplay(){
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  updateDisplay();
  clearDisplay();
}

void clearDisplay(){
  display.clearDisplay();
  delay(1500);
}

void updateDisplay(){
  display.display();
}

void drawHorizontalLine(int xStart, int y, int xEnd){
  int a = xStart;
  while(a <= xEnd){
    display.drawPixel(a, y, WHITE);
    a++;
  }
}
 
void setup() {
  initDisplay();
  
  display.setTextSize(2);
  display.setTextColor(WHITE);  
  display.setCursor(0,0);
  display.println("S85");

  display.setTextSize(1);
  display.setCursor(0,16);
  display.println("in");
  display.setCursor(14,16);
  display.println("2");
  display.setCursor(22,16);
  display.println("min");

  display.setCursor(50,0);
  display.println("Adlershof");
  display.setCursor(50,8);
  display.println("Ostkreuz");

  display.setCursor(50,18);
  display.setTextSize(2);
  display.println("Pankow");

  drawHorizontalLine(0, 31, 4);
  drawHorizontalLine(0, 29, 4);
  drawHorizontalLine(1, 28, 4);
  drawHorizontalLine(2, 27, 4);
  drawHorizontalLine(3, 26, 4);
  
  drawHorizontalLine(6, 31, 10);
  drawHorizontalLine(6, 29, 10);
  drawHorizontalLine(7, 28, 10);
  drawHorizontalLine(8, 27, 10);
  drawHorizontalLine(9, 26, 10);
  
  drawHorizontalLine(12, 31, 16);
  drawHorizontalLine(18, 31, 22);
  
  updateDisplay();
}
 
void loop() {

}
