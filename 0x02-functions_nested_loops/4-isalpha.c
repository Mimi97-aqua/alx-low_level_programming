#include "main.h"

/**
 * _isalpha - Entry point
 * @c: character to be checked
 * Return: 1 if c is a letter and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}
