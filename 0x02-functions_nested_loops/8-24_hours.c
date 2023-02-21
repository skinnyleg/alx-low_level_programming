#include "main.h"

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
				_putchar(print_last_digit(i) + '0');
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
				_putchar(print_last_digit(j) + '0');
			}
			_putchar('\n');
			j++;
		}
		i++;
	}
}
