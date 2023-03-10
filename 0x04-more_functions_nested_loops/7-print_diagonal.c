#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * in the terminal.
 *
 * @n: how many times the
 * diagonal is drawn
 */

void print_diagonal(int n)
{
	int i = 0;
	int sp = 0;

	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		sp = i;
		while (sp != 0)
		{
			_putchar(' ');
			sp--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
