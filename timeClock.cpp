# https://www.arduinolibraries.info/libraries/esp32-time
# https://github.com/fbiego/ESP32Time


#include <ESP32Time.h>

ESP32Time rtc;


void setup() {
  Serial.begin(115200);
  // put your setup code here, to run once:
  rtc.setTime(30, 38, 21, 30, 9, 2021);  // 17th Jan 2021 15:24:30
  //setTime(1609459200);  // 1st Jan 2021 00:00:00
  //rtc.setTimeStruct(time);  // set with time struct
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(rtc.getTime("%A, %B %d %Y %H:%M:%S"));   // (String) returns time with specified format 
  // formating options  http://www.cplusplus.com/reference/ctime/strftime/
  delay(5000);
}
