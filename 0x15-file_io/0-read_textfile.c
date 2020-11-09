#include "holberton.h"

/**
 * read_textfile - reads a text file ans prints it to the POSIX standard output
 *
 * @filename: the path of the file
 * @letters: the number of letters it should read and print
 *
 * Return: number of letters it could read and print
 * or 0 if the file can't be opened, filename is NULL, or write fails
 */

ssize_t	read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	ssize_t bytes = 0, write_o = 0;
	char *buf = NULL;

	if (fd > -1 && letters > 0 && filename)
	{
		buf = malloc(sizeof(char) * letters);
		if (buf)
		{
			bytes = read(fd, buf, letters);
			if (bytes > -1)
			{
				write_o = write(STDOUT_FILENO, buf, bytes);
				close(fd);
				free(buf);
				if (write_o == bytes && write_o > -1)
					return (bytes ? bytes : (ssize_t)letters);
			}
			free(buf);
		}
	}
	return (0);
}
