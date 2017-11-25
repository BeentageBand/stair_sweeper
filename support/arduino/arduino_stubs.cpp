#include "Arduino.h"

HardwareSerial Serial(NULL, NULL, NULL, NULL, NULL, NULL);

HardwareSerial::HardwareSerial(
      volatile uint8_t *ubrrh, volatile uint8_t *ubrrl,
      volatile uint8_t *ucsra, volatile uint8_t *ucsrb,
      volatile uint8_t *ucsrc, volatile uint8_t *udr)
: Stream(),
_ubrrh(ubrrh),
_ubrrl(ubrrl),
_ucsra(ucsra),
_ucsrb(ucsrb),
_ucsrc(ucsrc),
_udr(udr)
{}


void HardwareSerial::begin(unsigned long baud, uint8_t port)
{}

void delay(unsigned long)
{}

int HardwareSerial::available(void){return 0;}
int HardwareSerial::peek(void){ return 0;}
int HardwareSerial::read(void){return 0;}
int HardwareSerial::availableForWrite(void){ return 0;}
void HardwareSerial::flush(void){}
size_t HardwareSerial::write(uint8_t){return 0UL;}

int main(void)
{
	setup();
	while(true)
	{
		loop();
	}
	return 0;
}
