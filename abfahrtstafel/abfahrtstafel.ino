
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <Fonts/FreeSansBold9pt7b.h>

Adafruit_ST7735 tft = Adafruit_ST7735(10, 9, 8);

#define BLACK ST7735_BLACK
#define WHITE ST7735_WHITE

void setup(void) {
  tft.initR(INITR_BLACKTAB);
  tft.setRotation(1);
  
  tft.fillScreen(BLACK);

  tft.setCursor(2,15);
  tft.setTextColor(WHITE);
  tft.setFont(&FreeSansBold9pt7b);
  tft.print("Abfahrten");
}

void loop() {
  
}
