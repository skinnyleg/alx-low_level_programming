#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two arguments
 * and prints it
 *
 * @argc: number of arguments
 * @argv: two dimensional array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 1;
	int res = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (argv[i][0] <= '0' || argv[i][0] >= '9')
		{
			printf("Error\n");
			return (1);
		}
		res += atoi(argv[i]);
		i++;
	}	
	printf("%d\n", res);
	return (0);
}
