#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: a pointer to a squence of
 * characters
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
		j = i / 2;
	else
	{
		j = (i - 1) / 2;
		j++;
	}
	while (i > j)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
