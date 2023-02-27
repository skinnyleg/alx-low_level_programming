#include "main.h"

/**
 * print_array - print an array
 * content
 *
 * @a: a pointer to a sequence of
 * numbers
 * @n: the size of the array
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n -1)
			printf(", ");
		i++;	
	}
	printf("\n");
}
