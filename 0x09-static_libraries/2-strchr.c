#include "main.h"

/**
 * _strchr - searches for a character
 * in a string
 *
 * @s: the string to search in
 * @c: the character to look for
 * Return: from the first occurence
 * of the character to the end
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	return (NULL);
}
