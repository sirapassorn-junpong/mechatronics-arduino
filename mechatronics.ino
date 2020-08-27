#include <M5Stack.h>
void setup() {
 M5.begin(true, false, true);
 M5.Power.begin();
 M5.Lcd.clear(BLACK);
 M5.Lcd.setTextColor(YELLOW);
 M5.Lcd.setTextSize(3);
 M5.Lcd.setCursor(65, 10);
 M5.Lcd.println("Hello World");
}

int count = 1;
void loop() {
  M5.update();
  if(M5.BtnA.wasReleased()){
    M5.Lcd.clear();
      if(count == 1){
         M5.Lcd.clear();
         M5.Lcd.setTextColor(RED); 
         M5.Lcd.setCursor(65, 10); 
         M5.Lcd.println("Hello World");
         count++;
       }
      else if(count == 2){
         M5.Lcd.clear();
         M5.Lcd.setTextColor(GREEN); 
         M5.Lcd.setCursor(65, 10); 
         M5.Lcd.println("Hello World");
         count++;
      }
      else if(count == 3){
        M5.Lcd.clear();
        M5.Lcd.setTextColor(BLUE); 
        M5.Lcd.setCursor(65, 10); 
        M5.Lcd.println("Hello World");
        count = 1;
      }
   }
}
