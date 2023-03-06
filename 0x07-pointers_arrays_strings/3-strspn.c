#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string to search in
 * @accept: the substring
 * Return:  the number of bytes in the
 * initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				break;
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (i);
}
