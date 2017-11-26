/*
 * stair_stepper.h
 *
 *  Created on: Nov 25, 2017
 *      Author: puch
 */

#ifndef STAIR_STEPPER_H_
#define STAIR_STEPPER_H_

#include "std_reuse.h"
#include "AccelStepper.h"

class StairStepper
{
private:
	AccelStepper armAngle;// arm angle 0-5000? - neg is out
	AccelStepper stairClimb; // up down -10,000 to 10,000 - neg goes up
	AccelStepper armExtension; // arm extension 0-4000 - pos goes out
    const uint8_t stepperEnable;
public:
	static StairStepper & Single(void);

private:
	StairStepper(void);
	virtual ~StairStepper(void);

public:
	void on(void);
	void off(void);

	void step_up(void);
	void step_down(void);

	void run(void);
};

#endif /* STAIR_STEPPER_H_ */
