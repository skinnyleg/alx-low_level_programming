#include "main.h"

/**
 * _sqrt_recursion - calculate the
 * square root of n
 *
 * @n: a number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	int i = 1, result = 1;

	while (result <= n)
	{
		i++;
		result = i * i;
	}
	i--;
	if ((i * i) != n)
		return (-1);
	return (i);
}

