#include <stdio.h>

/**
 * main - prints the number of arguments
 * passed to the executable
 *
 * @argc: number of arguments
 * @argv: two dimensional array
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
