#include "main.h"

/**
 * _sqrt - calcutate
 * square root of n
 *
 * @n: a number
 * @i: a number
 * Return: square root of n
 */
int _sqrt(int n, int i)
{
	if ((i * i) < n)
		return (_sqrt(n, i + 1));
	if ((i * i) == n)
		return (i);
	return (-1);
}

/**
 * _sqrt_recursion - calculate the
 * square root of n
 *
 * @n: a number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

