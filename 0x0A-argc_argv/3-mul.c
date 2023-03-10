#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two arguments
 * and prints it
 *
 * @argc: number of arguments
 * @argv: two dimensional array
 * Return: 0 is succseful or 1 if an error
 * occurred
 */

int main(int argc, char **argv)
{
	int i = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
