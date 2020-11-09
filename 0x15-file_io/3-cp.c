#include "holberton.h"

/**
 * handle_exit - handles exit codes of cp function
 *
 * @code: the exit code
 * @av: the arguments of cp
 * @fd: the current open file descriptor
 */

void	handle_exit(int code, char **av, int fd)
{
	if (code == 97)
		dprintf(STDOUT_FILENO, "Usage: file_from file_to\n");
	else if (code == 98)
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", av[1]);
	else if (code == 99)
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]);
	else if (code == 100)
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n", fd);
	exit(code);
}

/**
 * main - entry point for our function cp
 *
 * @ac: count of arguments
 * @av: values of arguments
 *
 * Return: 1 on success, exit on failure
 */

int		main(int ac, char **av)
{
	char buf[1024];
	int fd_f = 0, fd_t = 0, close_o = 0;
	ssize_t bytes = 0, write_o = 0;

	if (ac != 3)
		handle_exit(97, av, 0);

	fd_f = open(av[1], O_RDONLY);
	if (fd_f > -1 && av[1])
	{
		fd_t = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fd_t > -1 && av[2])
		{
			while (1)
			{
				bytes = read(fd_f, buf, 1024);
				if (bytes > 0)
					write_o = write(fd_t, buf, bytes);
				else if (bytes == 0)
				{
					close_o = close(fd_t);
					if (close_o != 0)
						handle_exit(100, av, fd_t);
					close_o = close(fd_f);
					if (close_o != 0)
						handle_exit(100, av, fd_f);
					return (1);
				}

				if (write_o == -1)
					break;
			}
		}
		close(fd_f);
		handle_exit(99, av, 0);
	}
	handle_exit(98, av, 0);
	return (-1);
}
