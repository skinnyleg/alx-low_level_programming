#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: a pointer to a squence of
 * characters
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
