#include "main.h"

/**
 * _strlen_recursion - length of a string
 *
 * @s: a string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		i++;
		i += _strlen_recursion(&s[i]);
	}
	return (i);
}

