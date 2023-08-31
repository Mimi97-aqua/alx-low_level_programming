#include "main.h"

/**
 * _abs - Entry point
 * Computes absolute value of an integer
 * Return: Always 0 (Success)
 */

int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (-a);
	}

	return (0);
}
