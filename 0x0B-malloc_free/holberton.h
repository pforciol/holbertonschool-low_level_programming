#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>

int		_putchar(char);
char	*create_array(unsigned int, char);
char	*_strdup(char *);
char	*str_concat(char *, char *);
int		**alloc_grid(int, int);
void	free_grid(int **, int);
char	*argstostr(int, char **);
char	**strtow(char *);

#endif
