#include "air_sweeper_console.h"

static char Stair_Stepper_Name PROGMEM [] = "StairStepper";

void Stair_Sweeper_Console(char const ** argv, uint32_t argc)
{

	if(NULL != argv && argc)
	{
		while(argc && NULL != argv[0])
		{
			if(0 == memcmp_P(argv[0], 
		
	}
}
