#include <stdio.h>

/**
 * main - prints program name
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);	
}