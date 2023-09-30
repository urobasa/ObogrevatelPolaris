#include <Arduino.h>
// put function declarations here:
#define v220_null_switch = PD4
#define v220_small_hot = PD5
#define v200_full_hot = PD6
#define ventilator_check_runned PD2
volatile uint8_t flag = 0;
void vent_one_int(void) {
  flag = 1;
}
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN,1);
  pinMode(ventilator_check_runned, INPUT_PULLUP);
  attachInterrupt((ventilator_check_runned), vent_one_int, FALLING);
  pinMode(v220_null_switch, OUTPUT);
  pinMode(v220_small_hot, OUTPUT);
  pinMode(v200_full_hot, OUTPUT);
  digitalWrite(PD5,1);
  digitalWrite(PD6,1);
  digitalWrite(PD4,1);
}
void loop() {
  if (flag) {
   digitalWrite(LED_BUILTIN, 0);
   delay(300);
   digitalWrite(LED_BUILTIN, 1);
    delay(300);
   digitalWrite(LED_BUILTIN, 0);
   delay(300);
   digitalWrite(LED_BUILTIN, 1);
    delay(300);
   flag = 0;
 }
 }