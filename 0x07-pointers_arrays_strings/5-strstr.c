#include "main.h"

/**
 * _strstr - seraches for a substring
 *
 * @haystack: the string to search in
 * @needle: the substring to look for
 * Return: from the substring until the end
 * of the string or null is the substring
 * is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0' && needle[j] == haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
