#include "main.h"

/**
 * print_numbers - prints numbers from
 * 0 to 9 except 2 and 4
 *
 */

void print_numbers(void)
{
	int i = 48;

	while (i <= '9')
	{
		if (i != '2' || i != '4')
			_putchar(i);
		i++;
	}
	_putchar('\n');
}
