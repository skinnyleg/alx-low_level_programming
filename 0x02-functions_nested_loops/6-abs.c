#include "main.h"

/**
 * print_sign - returns the absolute
 * value of n
 *
 * @n: a number
 * Return: the absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
