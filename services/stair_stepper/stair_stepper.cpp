/*
 * stair_stepper.cpp
 *
 *  Created on: Nov 25, 2017
 *      Author: puch
 */
#define Dbg_FID DBG_FID_DEF(STAIR_STEPPER_FID, 0)

#include "stair_stepper.h"

StairStepper & StairStepper::Single(void)
{
	static StairStepper singleton;
	return singleton;
}

StairStepper::StairStepper(void)
:
armAngle(AccelStepper::DRIVER, 2, 5), // arm angle 0-5000? - neg is out
stairClimb(AccelStepper::DRIVER, 3, 6), // up down -10,000 to 10,000 - neg goes up
armExtension(AccelStepper::DRIVER, 4, 7), // arm extension 0-4000 - pos goes out
stepperEnable(8)
{
	pinMode(stepperEnable, OUTPUT);
	armAngle.setMaxSpeed(1000.0);
	armAngle.setAcceleration(2000.0);
	stairClimb.setMaxSpeed(1000.0);
	stairClimb.setAcceleration(2000.0);
	armExtension.setMaxSpeed(1000.0);
	armExtension.setAcceleration(2000.0);

	armAngle.setCurrentPosition(0);
	stairClimb.setCurrentPosition(0);
	armExtension.setCurrentPosition(0);

}

StairStepper::~StairStepper(void)
{

}

void StairStepper::on(void)
{
	digitalWrite(stepperEnable, LOW);
}

void StairStepper::off(void)
{
	digitalWrite(stepperEnable, HIGH);
}

void StairStepper::step_up(void)
{

}
void StairStepper::step_down(void)
{

}
void StairStepper::run(void)
{

}

