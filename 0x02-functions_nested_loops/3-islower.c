#include "main.h"

/**
 * _islower - checks if c is lowercase
 * Return: 0 if c is lowercase and
 * 1 if it's uppercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
