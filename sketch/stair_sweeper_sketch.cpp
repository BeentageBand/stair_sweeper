#define Dbg_FID DBG_FID_DEF(SKETCH_FID, 0)

#include "Arduino.h"
#include "dbg_log.h"

void setup(void)
{
	Serial.begin(19200);
}

void loop(void)
{
	static int secs = 0;
	Dbg_Info("loop %d secs", secs++);
	delay(1000);
}
