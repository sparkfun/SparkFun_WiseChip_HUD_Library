/*
  Segment Counting on the WiseChip OLED HUD231
  By: Nick Poole
  SparkFun Electronics
  Date: April 20, 2018
  License: This code is public domain but you buy me a beer if you use this and we meet someday (Beerware license).

  Feel like supporting our work? Buy a board from SparkFun!
  https://www.sparkfun.com/products/14691

  This example shows how to use loops to count on the number segments and demonstrates that
  the "set" function for each number segment fails gracefully when given an argument above 
  the maximum that it can display.
 
*/

#include <WiseChipHUD.h>

WiseChipHUD myHUD;

void setup() {

  myHUD.begin();

}

void loop() {

  myHUD.clearAll(); // Clears all of the segments

while(1){

  for(int i = 0; i < 200; i += 5){
  myHUD.setHeading(i);  // Max 199
  myHUD.setRadarDistance(i,0); // Max 999    
  myHUD.setDestinationDistance(i,2); // Max 999
  myHUD.setTurnDistance(i,1); // Max 999
  myHUD.setTirePressure(i,1); // Max 99
  myHUD.setSpeedometer(i); // Max 199
  delay(200);
  }

  myHUD.clearAll();

};

}
