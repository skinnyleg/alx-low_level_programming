#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 */

void    print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

