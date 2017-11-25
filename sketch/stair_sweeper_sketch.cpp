#define Dbg_FID DBG_FID_DEF(SKETCH_FID, 0)

#include "Arduino.h"
#include "dbg_log.h"
#include "stair_stepper.h"

static int led = A0;
static int leftButton = A2;
static int rightButton = A1;
static int vacuum = A3;

void setup(void)
{
	Serial.begin(19200); //needed for dbg_log
	Dbg_Info("setup", " ");
	pinMode(led, OUTPUT);
	pinMode(vacuum, OUTPUT);
	pinMode(leftButton, INPUT_PULLUP);
	pinMode(rightButton, INPUT_PULLUP);
	digitalWrite(led, HIGH);

	StairStepper::Single().on();
	delay(100);
}

void loop(void)
{
	static int secs = 0;
	Dbg_Info("loop %d secs", secs++);
	delay(1000);
	if (digitalRead(rightButton) == LOW) {
		Dbg_Info("RightButton = %d", digitalRead(rightButton));
		armExtension.runToNewPosition(-4000);
	}

	if (digitalRead(leftButton) == LOW) {
		Dbg_Info("RightButton = %d", digitalRead(rightButton));
		armExtension.runToNewPosition(0);
	}

	StairStepper::Single().run();
}
