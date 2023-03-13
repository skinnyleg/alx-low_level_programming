#include "main.h"

/**
 * create_array -  creates an array of chars
 * and initializes it with a specific char
 *
 * @size: the size of the array
 * @c: the character ascii
 * Return: NULL if size equal 0 or
 * the array created and initialezed
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i = 0;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
