#include "main.h"

/**
 * alloc_grid - creates 2 dimensional array of integers
 *
 * @width: width of the two dimensional array
 * @height: height of the two dimensional array
 * Return: NULL if width or height is negative or
 * equals zero or the array created and initialezed
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * (height));
	if (ptr == NULL)
		return (NULL);
	while (i < height)
	{
		ptr[i] = (int *)malloc(sizeof(int) * (width));
		if (ptr[i] == NULL)
			return (NULL);
		j = 0;
		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (ptr);
}
