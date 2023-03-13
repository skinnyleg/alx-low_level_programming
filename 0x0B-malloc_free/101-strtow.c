#include "main.h"

/**
 * calc_block - calculate how many words
 *
 * @str: the string to split
 * Return: how many words
 */

int	calc_block(char const *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (!str[i] || str[0] == ' ')
		j = 0;
	while (str[i] != '\0')
		if (str[i++] == ' ' && str[i] != ' ' && str[i] != '\0')
			j++;
	return (j);
}

/**
 * free_memory - frees the two dimensional array
 *
 * @ptr: the two dimensional array
 * @block: index where alocation failed
 */


char	*free_memory(char **s,	int block)
{
	while (block--)
		free(s[block]);
	return (NULL);
}

/**
 * calc_size_copy - copy the string (word) to
 * the two dimensional array
 *
 * @str: the string to split
 * @hub: the two dimensioanl array
 * @block: how many words
 * Return: NULL if allocation failed or
 * the array created and initialezed
 */

char	**calc_size_copy(char **hub,	char *str,	int block)
{
	int	i;
	int	l;
	int	j = 0;

	i = 0;
	l = 0;
	while (*str != '\0')
	{
		while (str[i] != '\0' && str[i] != ' ')
			i++;
		if (i != 0 && l < block)
		{
			hub[l] = (char *)malloc((i + 1) * sizeof(char));
			if (hub[l] == NULL)
				free_memory(hub, block);
			j = 0;
			while (j < i)
			{
				hub[l][j] = str[j];
				j++;
			}
			hub[l][j] = '\0';
			l++;
			str = str + i;
			i = 0;
		}
		else
			str = str + 1;
	}
	hub[l] = NULL;
	return (hub);
}

/**
 * strtow - splits a string into words
 *
 * @str: the string to split
 * Return: NULL if allocation failed or
 * the array created and initialezed
 */


char **strtow(char *str)
{
	int		j;
	char	**hub;

	j = 0;
	hub = NULL;
	if (!str || str[0] == '\0')
		return (NULL);
	j = calc_block(str);
	hub = (char **)malloc((j + 1) * sizeof(char *));
	if (hub == NULL)
		return (NULL);
	calc_size_copy(hub, (char *)str, ' ', j);
	return (hub);
}
