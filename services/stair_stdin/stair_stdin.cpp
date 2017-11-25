#include "stair_stdin.h"
#include "Arduino.h"

StairStidn::FSM StairStdin::fsm;

StairStdin::StairStdin(uint8_t const leftButton, uint8_t const rightButton,
			uint8_t const ledPin);

void StairStdin::onSetup(void)
{
	pinMode(this->left, INPUT_PULLUP);
	pinMode(this->right, INPUT_PULLUP);
	pinMode(this->led, OUTPUT);
}
	
void StairStdin::onLoop(void)
{
	Mail mail;

	uint8_t rc = this->mbx.getMail(mail);

	if(0 == rc)
	{
		StairStdin::fsm.dispatch(mail);
	}
}


void StairStdin::FSM::dispatch(Mail & mail)
{
	this->
