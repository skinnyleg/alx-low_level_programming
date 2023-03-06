#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: the string to search in
 * @accept: the substring
 * Return:  the number of bytes in the
 * initial segment of s which consist
 * only of bytes from accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
