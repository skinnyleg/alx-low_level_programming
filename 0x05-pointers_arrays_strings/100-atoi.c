#include "main.h"

/**
 * _atoi - converts a string
 * to a integer
 *
 * @s: the string to convert to integer
 * Return: the new integer
 */

int _atoi(char *s)
{
	int	i;
	int	sign;
	int	r;

	i = 0;
	sign = 1;
	r = 0;
	while (!(s[i] >= 48 && s[i] <= 57))
	{
		if (s[i] == 45)
			sign = -sign;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		r = (r * 10) + (s[i] - 48);
		i++;
	}
	return (sign * r);
}
