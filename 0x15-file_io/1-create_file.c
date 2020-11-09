#include "holberton.h"

/**
 * create_file - creates a file
 *
 * @filename: the path of the file
 * @text_content: the content of the file to write in
 *
 * Return: 1 on success, -1 on failure (file can't be created, written)
 */

int	create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	ssize_t write_o = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd > -1 && filename)
	{
		while (text_content && text_content[len])
			len++;
		if (len > 0)
			write_o = write(fd, text_content, len);
		close(fd);
		if (write_o > -1)
			return (1);
	}
	return (-1);
}
