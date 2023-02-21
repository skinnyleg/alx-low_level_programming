#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 * 10 times
 *
 */

void	print_alphabet_x10(void)
{
	int i;

	for (int j = 0; j < 10; j++)
	{
		i = 97;
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');	
	}	
}
