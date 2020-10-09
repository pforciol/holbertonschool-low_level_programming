#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: length of argv table
 * @argv: table containing program name and argments
 *
 * Return: always 0 (Success)
 */

int		main(int argc, char **argv)
{
	int	result = 0;
	int	i = 1, j;

	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			result += atoi(argv[i++]);
		}
	}
	printf("%d\n", result);
	return (0);
}
