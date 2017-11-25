#ifndef STAIR_STDIN_H_
#define STAIR_STDIN_H_

#include "std_reuse.h"
#include "stair_stdin_mailist.h"


#ifdef __cplusplus
extern "C" {
#endif
	

class StairStdin
{
	private:
	uint8_t const left;
	uint8_t const right;
	uint8_t const led;

	Mailbox mbx;

	public:

	StairStdin(uint8_t const leftButton, uint8_t const rightButton,
			uint8_t const ledPin);

	void onSetup(void);

	void onLoop(void);
	
	private:

	STAIR_STDIN_MAILIST(PROCESSED_MESSAGES)
};

#ifdef __cplusplus
}
#endif
#endif /*STAIR_STDIN_H_*/
