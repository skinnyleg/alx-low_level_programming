#include "main.h"

/**
 * _strdup -  creates an array of chars
 * and initializes it with a string
 *
 * @str: the array to copy from
 * Return: NULL if stris NULL or
 * the array created and initialezed
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	ptr = (char *)malloc(sizeof(char) * (i));
	if (ptr == NULL)
		return (NULL);
	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}
	return (ptr);
}
