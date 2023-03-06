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
	unsigned int ret = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] == accept[i])
			{
				if (j > ret)
				{
					ret = j + 1;
					break;
				}
			}
			j++;
		}
		i++;
	}
	return (ret);
}
