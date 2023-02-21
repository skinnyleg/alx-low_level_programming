#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 * 10 times
 *
 */

void	print_alphabet_x10(void)
{
	int i;
	int j;

	j = 0;
	while (j < 10)
	{
		i = 97;
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
