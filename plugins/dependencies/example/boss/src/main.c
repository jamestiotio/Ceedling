#include <stdlib.h>
#include "boss.h"

#define WORK 20

int main(int argc, char *argv[]) 
{
    int i;
    int work[WORK];
    int retval;

	// This could be more interesting... but honestly, we're just proving this all builds
	boss_start();

	// Hire some workers
	for (i=0; i < 3; i++)
	{
		boss_hire_workers( 1 + rand() % 5 );
	}

	// Fire a few
	boss_fire_workers( rand() % 3 );

	// Do some work
	for (i= 0; i < WORK; i++)
	{
		work[i] = rand() % 10;
	}
	retval = boss_micro_manage(work, WORK);

	return retval;
}