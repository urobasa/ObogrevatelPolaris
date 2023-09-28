#include <Arduino.h>
// put function declarations here:
#define v220_null_switch = PD5
#define v220_small_hot = PD3
#define v200_full_hot = PD4
#define ventilator_check_runned PD2
volatile uint8_t flag = 0;
void vent_one_int(void) {
  flag = 1;
}

void setup() {
  pinMode(ventilator_check_runned, INPUT_PULLUP);
  pinMode(PD5, OUTPUT);
  pinMode(PD6, OUTPUT);
  pinMode(PD3, OUTPUT);
  pinMode(PD4, OUTPUT);
  digitalWrite(PD5,0);
  digitalWrite(PD6,0);
  digitalWrite(PD3,0);
  digitalWrite(PD4,0);
}
void loop() {
  if (flag) {
   digitalWrite(LED_BUILTIN, 0);
   delay(300);
   digitalWrite(LED_BUILTIN, 1);
   flag = 0;
 }
 }

