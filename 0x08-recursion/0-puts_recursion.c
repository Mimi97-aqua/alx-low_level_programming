#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 *
 * @s: pointer to a string
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	int x = 0;

	if (s[x] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[x]);
	s++;

	_puts_recursion(s);
}
