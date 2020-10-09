#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: length of argv table
 * @argv: table containing program name and argments
 *
 * Return: always 0 (Success)
 */

int		main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
