#include "main.h"

/**
 * swap_int - swap the values of
 * a and b
 *
 * @a: pointer to an int variable
 * @b: pointer to an int variable
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
