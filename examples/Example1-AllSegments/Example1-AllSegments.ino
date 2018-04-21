/*
  Driving the WiseChip OLED HUD231
  By: Nick Poole
  SparkFun Electronics
  Date: April 20, 2018
  License: This code is public domain but you buy me a beer if you use this and we meet someday (Beerware license).

  Feel like supporting our work? Buy a board from SparkFun!
  https://www.sparkfun.com/products/14691

  This example shows how to light every segment on the panel.
 
*/

#include <WiseChipHUD.h>

WiseChipHUD myHUD;

void setup() {

  myHUD.begin();

}

void loop() {

  myHUD.clearAll(); // Clears all of the segments

  /************************* Compass Group *************************/
  myHUD.compassCircle(9); // 0 = All Off; 1-8 = All Off Except Selected; 9 = All On; 10-17 = All On Except Selected
  myHUD.compassArrows(9); // 0 = All Off; 1-8 = All Off Except Selected; 9 = All On; 10-17 = All On Except Selected
  myHUD.setHeading(188);  // Max 199

  /************************* Radar Detector Group *************************/
  myHUD.radarDetector(8); // 0 = No Radar Gun Icon; 1 = Radar Gun Only; 2-8 = Distance Meter
  myHUD.setRadarDistance(888,0); // Max 999    
  myHUD.radarDistanceUnits(1); // 0 = Blank; 1 = "m" 

  /************************* Destination/Waypoint Group *************************/
  myHUD.flag(1); // 0 = Blank; 1 = flag icon 
  myHUD.setDestinationDistance(888,2); // Max 999
  myHUD.destinationDistanceUnits(3); // 0 = Blank; 1 = "h"; 2 = "m"; 3 = "km"
  myHUD.H01(1); // 0 = Blank; 1 = "h"

  /************************* Exit Group *************************/
  myHUD.leftTunnel(1); // 0 = Blank; 1 = Tunnel; Also try leftRoad();
  myHUD.middleTunnel(1); // 0 = Blank; 1 = Tunnel; Also try middleRoad();
  myHUD.rightTunnel(1); // 0 = Blank; 1 = Tunnel; Also try rightRoad();

  /************************* Navigation Group *************************/
  myHUD.nav_Group(1); // 0 = Entire Nav Group Off; 1 = Entire Nav Group On
  myHUD.setTurnDistance(888,1); // Max 999
  myHUD.turnDistanceUnits(2); // 0 = Blank; 1 = "m"; 2 = "km"
  // Turn Groups:
  // nav_KeepLeft(1);
  // nav_TurnLeft(1);
  // nav_HardLeft(1);
  // nav_UTurnLeft(1);
  // nav_ContinueStraight(1);
  // nav_KeepRight(1);
  // nav_TurnRight(1);
  // nav_HardRight(1);
  // nav_UTurnRight(1);

  /************************* Call Group *************************/
  myHUD.setCallIcon(3); // 0 = Blank; 1 = Outline; 2 = Outline + Phone Icon; 3 = All Segments

  /************************* TPMS Group *************************/
  myHUD.tirePressureAlert(3); // 0 = Blank; 1 = "TPMS"; 2 = "TIRE"; 3 = All Segments
  myHUD.setTirePressure(88,1); // Max 99

  /************************* Speedometer Group *************************/
  myHUD.setSpeedometer(188); // Max 199
  myHUD.speedometerUnits(1); // 0 = Blank; 1 = "km/h"

  delay(5000);

  myHUD.clearAll(); // Clears all of the segments

while(1){};

}
