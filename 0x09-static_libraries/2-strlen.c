#include "main.h"

/**
 * _strlen - returns the length
 * of the string s
 *
 * @s: a pointer to a squence of
 * characters
 * Return: the length of the string s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
