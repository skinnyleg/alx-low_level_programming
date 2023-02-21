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
 * jack_bauer - print every minute
 * from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				print_last_digit(i);
			}
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			else
			{
				_putchar((j / 10) + '0');
				print_last_digit(j);
			}
			_putchar('\n');
			j++;
		}
		i++;
	}
}
