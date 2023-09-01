#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: Function that prints every minute
 * of the day fof Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{
       	for (int hour = 0; hour < 24; hour++)
       	{
		for (int minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
	       	}
	}
}
