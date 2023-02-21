#include "main.h"

/**
 * print_sign - checks the sign of n
 *
 * @n: a number
 * Return: 0 is n is zero and
 * 1 if n is bigger than zero
 * and -1 if n is negative 
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}