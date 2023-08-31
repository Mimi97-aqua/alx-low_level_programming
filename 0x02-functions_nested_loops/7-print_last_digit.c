#include "main.h"

/**
 * print_last_digit - Entry point
 * @x: number whose last digit
 * will be printed
 * Return: last digit
 */

int print_last_digit(int x)
{
	int absolute_value;
	int last_digit;

	absolute_value = _abs(x);
	last_digit = absolute_value % 10;

	return (last_digit);
}
