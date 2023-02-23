#include "main.h"

/**
 * more_numbers - prints 10 times
 * numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int i;
	int j = 0;
	int n;

	for (j = 0; j < 10; j++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
				n = i / 10;
			else
				n = i;
			_putchar(n + 48);
			if (i >= 10)
				_putchar((i % 10) + 48);
			i++;
		}
		_putchar('\n');
	}
}
