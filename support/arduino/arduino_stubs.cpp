#include "Arduino.h"

HardwareSerial Serial(NULL, NULL, NULL, NULL, NULL, NULL);

HardwareSerial::HardwareSerial(
      volatile uint8_t *ubrrh, volatile uint8_t *ubrrl,
      volatile uint8_t *ucsra, volatile uint8_t *ucsrb,
      volatile uint8_t *ucsrc, volatile uint8_t *udr)
:
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

int main(void)
{
	setup();
	while(true)
	{
		loop();
	}
	return 0;
}
