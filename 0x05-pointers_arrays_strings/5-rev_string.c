#include "main.h"

/**
 * rev_string - revers a string
 * @s: a pointer to a squence of
 * characters
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char c;

	while (s[i] != '\0')
		i++;
	i--;
	while (j < i)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
		i--;
		j++;
	}
}
