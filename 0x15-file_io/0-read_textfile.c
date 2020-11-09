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
	ssize_t bytes = 0, write_o = -1;
	char *buf = NULL;

	if (fd > -1 && filename)
	{
		buf = malloc(sizeof(char) * (letters + 1));
		if (buf)
		{
			bytes = read(fd, buf, letters);
			buf[bytes] = '\0';
			if (bytes > -1)
				write_o = write(STDOUT_FILENO, buf, bytes);
			free(buf);
			close(fd);
			if (write_o > -1)
				return (bytes);
		}
	}
	return (0);
}
