#define Dbg_FID DBG_FID_DEF(SKETCH_FID, 2)

#include "Arduino.h"
#include "dbg_log.h"
#include <unistd.h>
#include <time.h>

#define NANOS_PER_SEC (1000000000)
#define NANOS_PER_MILLIS (1000000)
#define NANOS_PER_MICROS (1000)
#define MICROS_PER_SEC (1000000)
#define MILLIS_PER_SEC (1000)

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

int HardwareSerial::available(void){return 0;}
int HardwareSerial::peek(void){ return 0;}
int HardwareSerial::read(void){return 0;}
int HardwareSerial::availableForWrite(void){ return 0;}
void HardwareSerial::flush(void){}
size_t HardwareSerial::write(uint8_t){return 0UL;}

void delay(unsigned long ms)
{
	struct timespec tp;

	tp.tv_sec = ms / MILLIS_PER_SEC;
	tp.tv_nsec = (ms - (tp.tv_sec * MILLIS_PER_SEC))* NANOS_PER_MILLIS;

	Dbg_Info("sec %d nsec %d", tp.tv_sec, tp.tv_nsec);
	nanosleep(&tp, NULL);
}

void delayMicroseconds(unsigned int us)
{
	struct timespec tp;

	tp.tv_sec = us / MICROS_PER_SEC;
	tp.tv_nsec = (us - (tp.tv_sec * MICROS_PER_SEC)) * NANOS_PER_MICROS;

	Dbg_Verb("sec %d nsec %d", tp.tv_sec, tp.tv_nsec);
	nanosleep(&tp, &tp);
}
void pinMode(uint8_t, uint8_t){}

void digitalWrite(uint8_t, uint8_t){ }

int digitalRead(uint8_t) {return 0;}

unsigned long millis(void)
{
	struct timespec tp;
	clock_gettime(CLOCK_MONOTONIC_RAW, &tp);
	return (unsigned long) tp.tv_nsec /NANOS_PER_MILLIS + tp.tv_sec /NANOS_PER_SEC;
}
unsigned long micros(void)
{
	struct timespec tp;
	clock_gettime(CLOCK_MONOTONIC_RAW, &tp);
	return (unsigned long) tp.tv_nsec /NANOS_PER_MICROS;
}

int main(void)
{
	setup();
	while(true)
	{
		loop();
	}
	return 0;
}
