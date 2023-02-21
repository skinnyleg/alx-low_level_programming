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
/**
 * times_table - prints
 * the 9 times table
 *
 */

void times_table(void)
{
	int	i;
	int	j;
	int	out;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			out = i * j;
			if (j != 0 && out < 10)
				_putchar(' ');
			if (out < 10)
			{
				_putchar(out + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((out / 10) + '0');
				print_last_digit(out);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
