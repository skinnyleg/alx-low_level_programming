#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * Return: NULL if str is NULL or
 * the array created and initialezed
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int l = 0;
	int j = 0;

	while (s1 != NULL && s1[i] != '\0')
		i++;
	while (s2 != NULL && s2[j] != '\0')
		j++;
	ptr = (char *)malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	while (l < i)
	{
		ptr[l] = s1[l];
		l++;
	}
	l = 0;
	while (l + i < i + j)
	{
		ptr[l + i] = s2[l];
		l++;
	}
	ptr[l + i] = '\0';
	return (ptr);
}
