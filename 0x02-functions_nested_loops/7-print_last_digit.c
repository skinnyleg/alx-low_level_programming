#include "main.h"

/**
 * print_last_digit - prints last
 * digit
 *
 * @n: a number
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
		i = i * -1;
	_putchar(i + '0');
	return (i);
}
