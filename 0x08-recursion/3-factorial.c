#include "main.h"

/**
 * factorial - factorial of a num
 *
 * @n: a number
 * Return: factorial of n
 */

int factorial(int n)
{
	int i = n;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	i *= factorial(n - 1);
	return (i);
}

