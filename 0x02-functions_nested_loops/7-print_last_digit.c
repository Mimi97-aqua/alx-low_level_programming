#include "main.h"

/**
 * print_last_digit - Entry point
 * @x: number whose last digit
 * will be printed
 * Return: last digit
 */

int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
	{
		x = x * -1;
	}

	_putchar('0' + x);

	return (x);
}
