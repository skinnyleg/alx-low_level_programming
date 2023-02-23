#include "main.h"

/**
 * print_square - draws a square
 * in the terminal.
 *
 * @size: how big the trianlge
 *
 */

void print_triangle(int size)
{
	int i = 0;
	int j;
	int k;

	while (i < size)
	{
		j = size - i - 1;
		while (j != 0)
		{
			_putchar(' ');
			j--;
		}
		k = i + 1;
		while (k != 0)
		{
			_putchar('#');
			k--;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
