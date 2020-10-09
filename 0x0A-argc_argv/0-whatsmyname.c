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
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
