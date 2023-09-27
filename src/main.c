#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);


void setup() {
  pinMode(PD5, OUTPUT);
  pinMode(PD6, OUTPUT);
  pinMode(PD3, OUTPUT);
  pinMode(PD4, OUTPUT);
  digitalWrite(PD5,0);
  digitalWrite(PD6,0);
  digitalWrite(PD3,0);
  digitalWrite(PD4,0);
  // put your setup code here, to run once:
  int result = myFunction(2, 3);

}

void loop() {
 // digitalWrite(PD5,0);
 // delay(1000);
 // digitalWrite(PD5,1);
 //  delay(1000);
 // digitalWrite(PD6,0);
 //  delay(1000);
 // digitalWrite(PD6,1);
 // delay(1000);
 // digitalWrite(PD3,0);
 // delay(1000);
 // digitalWrite(PD3,1);
 // delay(1000);
 // digitalWrite(PD4,0);
 // delay(1000);
 // digitalWrite(PD4,1);
 // delay(1000);
 }

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}