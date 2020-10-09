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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
