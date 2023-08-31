#include "main.h"

/**
 * _abs - Entry point
 * @a: Value to compute absolute value
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
