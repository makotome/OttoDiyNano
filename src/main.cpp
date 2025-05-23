#include <Arduino.h>
#include "../lib/OttoDIYLib/src/Otto.h"

//----------------------------------------------------------------
//-- Otto All moves test
//-- Otto DIY invests time and resources providing open source code and hardware,
//-- please support by purchasing kits from https://www.ottodiy.com/
//-- Make sure to have installed all libraries: https://github.com/OttoDIY/OttoDIYLib
//-----------------------------------------------------------------
Otto ottoX; // This is Otto!

#define LeftLeg 2
#define RightLeg 3
#define LeftFoot 4
#define RightFoot 5
#define Buzzer 13
#define DIN A3        // Data In pin
#define CS A2         // Chip Select pin
#define CLK A1        // Clock pin
#define Orientation 1 // 8x8 LED Matrix orientation  Top  = 1, Bottom = 2, Left = 3, Right = 4

///////////////////////////////////////////////////////////////////
//-- Setup ------------------------------------------------------//
///////////////////////////////////////////////////////////////////
void setup()
{
  ottoX.init(LeftLeg, RightLeg, LeftFoot, RightFoot, true, Buzzer); // Set the servo pins and Buzzer pin
  ottoX.initMATRIX(DIN, CS, CLK, Orientation);
  ottoX.sing(S_connection); // Otto wake up!
  ottoX.home();
  delay(50);
  ottoX.playGesture(OttoHappy);
}

///////////////////////////////////////////////////////////////////
//-- Principal Loop ---------------------------------------------//
///////////////////////////////////////////////////////////////////
void loop()
{
  ottoX.walk(2, 1000, 1);  // 2 steps, "TIME". IF HIGHER THE VALUE THEN SLOWER (from 600 to 1400), 1 FORWARD
  ottoX.walk(2, 1000, -1); // 2 steps, T, -1 BACKWARD
  ottoX.turn(2, 1000, 1);  // 3 steps turning LEFT
  ottoX._tone(10, 3, 1);
  ottoX.bendTones(100, 200, 1.04, 10, 10);
  ottoX.home();
  delay(100);
  ottoX.turn(2, 1000, -1); // 3 steps turning RIGHT
  ottoX.bend(1, 500, 1);   // usually steps =1, T=2000
  ottoX.bend(1, 2000, -1);
  ottoX.shakeLeg(1, 1500, 1);
  ottoX.home();
  delay(100);
  ottoX.shakeLeg(1, 2000, -1);
  ottoX.moonwalker(3, 1000, 25, 1);  // LEFT
  ottoX.moonwalker(3, 1000, 25, -1); // RIGHT
  ottoX.crusaito(2, 1000, 20, 1);
  ottoX.crusaito(2, 1000, 20, -1);
  delay(100);
  ottoX.flapping(2, 1000, 20, 1);
  ottoX.flapping(2, 1000, 20, -1);
  delay(100);
  ottoX.swing(2, 1000, 20);
  ottoX.tiptoeSwing(2, 1000, 20);
  ottoX.jitter(2, 1000, 20); //(small T)
  ottoX.updown(2, 1500, 20); // 20 = H "HEIGHT of movement"T
  ottoX.ascendingTurn(2, 1000, 50);
  ottoX.jump(1, 500); // It doesn't really jumpl ;P
  ottoX.home();
  delay(100);
  ottoX.sing(S_cuddly);
  ottoX.sing(S_OhOoh);
  ottoX.sing(S_OhOoh2);
  ottoX.sing(S_surprise);
  ottoX.sing(S_buttonPushed);
  ottoX.sing(S_mode1);
  ottoX.sing(S_mode2);
  ottoX.sing(S_mode3);
  ottoX.sing(S_sleeping);
  ottoX.sing(S_fart1);
  ottoX.sing(S_fart2);
  ottoX.sing(S_fart3);
  ottoX.sing(S_happy);
  ottoX.sing(S_happy_short);
  ottoX.sing(S_superHappy);
  ottoX.sing(S_sad);
  ottoX.sing(S_confused);
  ottoX.sing(S_disconnection);
  delay(100);
  ottoX.playGesture(OttoHappy);
  ottoX.playGesture(OttoSuperHappy);
  ottoX.playGesture(OttoSad);
  ottoX.playGesture(OttoVictory);
  ottoX.playGesture(OttoAngry);
  ottoX.playGesture(OttoSleeping);
  ottoX.playGesture(OttoFretful);
  ottoX.playGesture(OttoLove);
  ottoX.playGesture(OttoConfused);
  ottoX.playGesture(OttoFart);
  ottoX.playGesture(OttoWave);
  ottoX.playGesture(OttoMagic);
  ottoX.playGesture(OttoFail);
  ottoX.home();
  delay(100);
  ottoX.putMouth(zero);
  delay(100);
  ottoX.putMouth(one);
  delay(100);
  ottoX.putMouth(two);
  delay(100);
  ottoX.putMouth(three);
  delay(100);
  ottoX.putMouth(four);
  delay(100);
  ottoX.putMouth(five);
  delay(100);
  ottoX.putMouth(6);
  delay(100);
  ottoX.putMouth(7);
  delay(100);
  ottoX.putMouth(8);
  delay(100);
  ottoX.putMouth(9);
  delay(100);
  ottoX.putMouth(smile);
  delay(100);
  ottoX.putMouth(happyOpen);
  delay(100);
  ottoX.putMouth(happyClosed);
  delay(100);
  ottoX.putMouth(heart);
  delay(100);
  ottoX.putMouth(angry);
  delay(100);
  ottoX.putMouth(smallSurprise);
  delay(100);
  ottoX.putMouth(bigSurprise);
  delay(100);
  ottoX.putMouth(tongueOut);
  delay(100);
  ottoX.putMouth(confused);
  delay(100);
  ottoX.putMouth(21); // diagonal
  delay(100);
  ottoX.putMouth(27); // interrogation
  delay(100);
  ottoX.putMouth(23); // sad open
  delay(100);
  ottoX.putMouth(24); // sad closed
  delay(100);
  ottoX.putMouth(vamp1);
  delay(100);
  ottoX.putMouth(vamp2);
  delay(100);
  ottoX.putMouth(xMouth);
  delay(100);
  ottoX.putMouth(okMouth);
  delay(100);
  ottoX.putMouth(thunder);
  delay(100);
  ottoX.putMouth(lineMouth);
  delay(100);
  ottoX.putMouth(culito);
  delay(100);
  ottoX.putAnimationMouth(littleUuh, 0);
  delay(1000);
  ottoX.putAnimationMouth(dreamMouth, 0);
  delay(1000);
  ottoX.putAnimationMouth(dreamMouth, 1);
  delay(1000);
  ottoX.putAnimationMouth(dreamMouth, 2);
  delay(1000);
}