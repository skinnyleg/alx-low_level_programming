#include "main.h"

/**
 * argstostr - concatenates all the arguments
 * of your program
 *
 * @ac: number of arguments
 * @av: two dimensional array with all the arguments
 * Return: NULL if allocation failed or
 * the array created and initialezed
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i = 1;
	int l = 0;
	int j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		l += j + 1;
		i++;
	}
	ptr = (char *)malloc(sizeof(char) * (l + 1));
	if (ptr == NULL)
		return (NULL);
	i = 1;
	l = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[l + j] = av[i][j];
			j++;
		}
		ptr[l + j] = '\n';
		l += j + 1;
		i++;
	}
	ptr[l] = '\0';
	return (ptr);
}
