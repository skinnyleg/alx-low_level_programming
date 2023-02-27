#include "main.h"

/**
 * _strcpy - copy the content of
 * src in the string dest
 *
 * @src: a string to copy from
 * @dest: a string to copy to
 * Return: dest filled with the content
 * of src
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
