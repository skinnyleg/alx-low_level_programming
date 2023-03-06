#include "main.h"

/**
 * _memcpy - copy n bytes from
 * src to dest
 *
 * @dest: the string to fill
 * @src: the string to copy from
 * @n: how many bytes to copy
 * Return: the new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
