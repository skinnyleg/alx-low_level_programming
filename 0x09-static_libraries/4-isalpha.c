#include "main.h"

/**
 * _isalpha - checks if c is a letter
 *
 * @c: the character ascii
 * Return: 0 if c is not a letter and
 * 1 if it's a letter
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

