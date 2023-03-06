#include "main.h"

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: an int array
 * @size: the size of the int array
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int diag = 0;
	int rev_diag = 0;

	while (i < size)
	{
		j = 0;
		diag += a[i];
		rev_diag += a[size - 1 - i];
		while (j < size)
		{
			a++;
			j++;
		}
		i++;
	}
	printf("%d, %d\n", diag, rev_diag);
}
