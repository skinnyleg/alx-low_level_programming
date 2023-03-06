#include "main.h"

/**
 * _memset - fills the n bytes
 * of the s string with the value
 * of b
 *
 * @s: a string
 * @b: the value to fill the string with
 * @n: how many bytes to fill
 * Return: the new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
