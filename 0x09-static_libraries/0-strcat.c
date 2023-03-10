#include "main.h"

/**
 * _strcat - appends the src string
 * to the dest string
 *
 * @src: a string to copy from
 * @dest: a string to append to
 * Return: dest appended with the content
 * of src
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
