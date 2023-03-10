#include <stdio.h>
#include <stdlib.h>

/**
 * main - the sum of the arguments
 *
 * @argc: number of arguments
 * @argv: two dimensional array
 * Return: 0 is succseful or 1 if an error
 * occurred
 */

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	int res = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] <= '0' || argv[i][j] >= '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;	
		}	
		res += atoi(argv[i]);
		i++;
	}
	printf("%d\n", res);
	return (0);
}
