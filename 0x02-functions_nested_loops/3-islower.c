#include "main.h"

/**
 * _islower - Entry point
 * @c: character to be checked
 * Return: 1 if lowercase and 0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z') ? 1 : 0;
}
