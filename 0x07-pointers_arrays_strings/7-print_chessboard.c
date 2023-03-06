#include "main.h"

/**
 * print_chessboard - prints a chessboard
 *
 * @a: a two dismensional array
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (a[i] != NULL)
	{
		j = 0;
		while (a[i][j] != '\0')
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
