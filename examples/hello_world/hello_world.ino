#include <Wire.h>
#include <ACM1602NI.h>


//ACM1602NI lcd;
ACM1602NI lcd(ACM_TYPE_1602);
#define LINES 2
#define COLUMNS 16
//ACM1602NI lcd(ACM_TYPE_2004);
//#define LINES 4
//#define COLUMNS 20
boolean isFirst = true;

void setup() {
  Wire.begin();
  lcd.begin(COLUMNS,LINES);
}

void loop() {
  if (isFirst) {
    lcd.print("Hello,");
    lcd.setCursor(4, 1);
    lcd.print("World!");
    isFirst = false;
  }
}
