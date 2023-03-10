#include <stdio.h>

/**
 * main - prints program name
 *
 * @argc: number of arguments
 * @argv: two dimensional array
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
