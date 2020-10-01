#include <stdio.h>

/**
 * print_line - prints a buffer line
 * @b: the pointed buffer
 * @c: the current position in buffer
 * @size: the max size of the content to print
 */

void	print_line(char *b, int c, int size)
{
	int i = 0;

	printf("%08x: ", c);
	while (i < 10)
	{
		if (i + c >= size)
			printf("  ");
		else
			printf("%02x", b[i + c]);
		if (i % 2 != 0)
			printf(" ");
		i++;
	}

	i = 0;
	while (i < 10)
	{
		if (i + c < size)
		{
			if ((b[i + c] < 32 || b[i + c] > 126))
				printf(".");
			else
				printf("%c", b[i + c]);
		}
		i++;
	}
	printf("\n");
}

/**
 * print_buffer - prints a buffer
 * @b: the pointed buffer
 * @size: the size of the content to print
 */

void	print_buffer(char *b, int size)
{
	int i = 0;

	if (size <= 0)
		printf("\n");
	else
		while (i < size)
		{
			print_line(b, i, size);
			i += 10;
		}
}
