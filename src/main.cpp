#include <Arduino.h>
#include <def.h>
#define DEMORA 1000
#define LED PTB5
#define LED_DIR DDB5


int main (void){
  DDB5=OUTPUT;
  for(;;){
    LED=HIGH;
    _delay_ms(DEMORA);
    LED=LOW;
    _delay_ms(DEMORA);
  }
  return 0;
}