#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: text to add to the end of the file
 *
 * Return: 1 on success, -1 on failure (NULL filename, bad permissions)
 */

int	append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND), len = 0;
	ssize_t write_o = 0;

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
