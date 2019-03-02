# Modelleisenbahn-Zugzielanzeiger
Zugzielanzeiger für die Nenngröße H0
Ansteuerung per Arduino Nano

## Zugzielanzeiger Bahnsteig
Versionen:
* S-Bahn Berlin (Deutsche Bahn) 
* BVG (Berliner Verkehrsbetriebe)

### Display
0.91 Zoll OLED Display

### Bibliotheken
* Adafruit_SSD1306
* Adafruit_GFX

| Arduino Pin        | Display Board Pin |
| ------------------ | ----------------- |
| GND                | GND               |
| 5V                 | VCC               |
| A5                 | SCK               |
| A4                 | SDA               |

## Abfahrtstafel Bahnhofsvorplatz
Version Deutsche Bahn

### Display
Display: 1.8 Zoll TFT Display

### Bibliotheken
* Adafruit_ST7735
* Adafruit_GFX

| Arduino Pin        | Display Board Pin |
| ------------------ | ----------------- |
| 3.3 V              | LED               |
| D13                | SCK               |
| D11                | SDA               |
| D9                 | A0                |
| D8                 | RESET             |
| D10                | CS                |
| GND                | GND               |
| 5V                 | VCC               |