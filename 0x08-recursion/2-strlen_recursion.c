#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string
 *
 * @s: pointer to string
 *
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (1 + _strlen_recursion(s));
}
