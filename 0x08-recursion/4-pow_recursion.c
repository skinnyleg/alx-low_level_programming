#include "main.h"

/**
 * _pow_recursion - calculate the power
 *
 * @x: the base
 * @y: the power
 * Return: x with the power of y
 */

int _pow_recursion(int x, int y)
{
	int i = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	i *= _pow_recursion(x, y - 1);
	return (i);
}

