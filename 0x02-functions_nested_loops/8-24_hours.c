#include "main.h"

/**
 * print_last_digit - print every minute
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
				_putchar('0');
			_putchar(i + '0');
			_putchar(':');
			if (j < 10)
				_putchar('0');
			_putchar(j + '0');
			j++;
		}
		i++;
	}
}
