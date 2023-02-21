#include "main.h"

/**
 * _islower - checks if c is lowercase
 *
 * @c: the character ascii
 * Return: 0 if c is lowercase and
 * 1 if it's uppercase
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}