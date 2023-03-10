#include "main.h"

/**
 * _isupper - checks if c is uppercase
 *
 * @c: the character ascii
 * Return: 0 if c is lowercase and
 * 1 if it's uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
