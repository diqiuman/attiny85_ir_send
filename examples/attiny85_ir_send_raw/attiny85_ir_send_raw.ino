/*
 *  https://github.com/anorneto/attiny85_ir_send
 */
 
#include <attiny85_ir_send.h>

IRsend irsend;                // attiny85 pin 1

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  
  int khz = 38; // 38kHz carrier frequency for the NEC protocol
  unsigned int irSignal[] = {1300, 400, 1250, 450, 400, 1250, 1250, 450, 1250, 400, 450, 1250, 400, 1250, 400, 1250, 450, 1250, 400, 1300, 400, 1250, 1250};
  irsend.sendRaw(irSignal, sizeof(irSignal) / sizeof(irSignal[0]), khz); //Note the approach used to automatically calculate the size of the array.
  
  delay(2000);
}
