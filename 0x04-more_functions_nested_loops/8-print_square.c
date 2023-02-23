#include "main.h"

/**
 * print_square - draws a square
 * in the terminal.
 *
 * @size: how big the square
 *
 */

void print_square(int size)
{
	int i = 0;
	int j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
