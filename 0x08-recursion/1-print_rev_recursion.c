#include "main.h"

/**
 * _print_rev_recursion -  prints a string
 * in reverse
 *
 * @s: a string
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	i--;
	if (i != -1)
	{
		_putchar(s[i]);
		_print_rev_recursion(&s[i - 1]);
	}
	if (i == -1)
		_putchar('\n');
}

