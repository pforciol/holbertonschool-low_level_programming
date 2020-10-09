#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: length of argv table
 * @argv: table containing program name and argments
 *
 * Return: 0 if success, 1 if error
 */

int		main(int argc, char **argv)
{
	int change = 0, i = 0, value;
	int	coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value > 0)
	{
		while (value != 0)
		{
			change += value / coins[i];
			value %= coins[i++];
		}
	}
	printf("%d\n", change);
	return (0);
}
