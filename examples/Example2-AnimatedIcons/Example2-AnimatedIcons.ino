/*
  Animated Icons on the WiseChip OLED HUD231
  By: Nick Poole
  SparkFun Electronics
  Date: April 20, 2018
  License: This code is public domain but you buy me a beer if you use this and we meet someday (Beerware license).

  Feel like supporting our work? Buy a board from SparkFun!
  https://www.sparkfun.com/products/14691

  This example shows how to loop through the group functions to animate icons for alerts.
 
*/

#include <WiseChipHUD.h>

WiseChipHUD myHUD;

void setup() {

  myHUD.begin();

}

void loop() {

  myHUD.clearAll(); // Clears all of the segments

  for(int j = 0; j < 2; j++){
    for(int i = 1; i < 9; i++){
      myHUD.compassCircle(i);
      delay(50);
    }
  }

  for(int j = 0; j < 2; j++){
    for(int i = 10; i < 18; i++){
      myHUD.compassCircle(i);
      delay(50);
    }
  }

  myHUD.compassCircle(0);

  for(int j = 0; j < 2; j++){
    for(int i = 1; i < 9; i++){
      myHUD.compassArrows(i); 
      delay(100);
    }
  }

  for(int j = 0; j < 2; j++){
    for(int i = 10; i < 18; i++){
      myHUD.compassArrows(i); 
      delay(100);
    }
  }
  
  myHUD.compassArrows(0); 

  for(int i = 0; i < 5; i++){
    myHUD.radarDetector(1); 
    delay(100);
    myHUD.radarDetector(0);
    delay(100);
  }

  myHUD.radarDistanceUnits(1);

  for(int j = 800; j >= 0; j = j - 10){
    myHUD.setRadarDistance(j,0); 
    myHUD.radarDetector(j/100);
  }

  myHUD.clearAll();

  for(int j = 0; j < 5; j++){
    for(int i = 0; i < 4; i++){
      myHUD.setCallIcon(i); 
      delay(100);
    }
  }

  myHUD.setCallIcon(0); 

  myHUD.tirePressureAlert(3);
  myHUD.setTirePressure(30,1); 
  delay(2000);

  for(int j = 30; j > 14; j--){ 
    myHUD.setTirePressure(j,1); 
    delay(random(100,1000));
  }

  for(int j = 0; j < 10; j++){
    for(int i = 1; i < 3; i++){
      myHUD.tirePressureAlert(i);
      delay(100);
    }
  }
  myHUD.tirePressureAlert(3);

  myHUD.clearAll();

while(1){};

}
