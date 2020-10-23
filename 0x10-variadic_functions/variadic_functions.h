#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct specs - structure of specifiers and their printf ones
 *
 * @spec: given specifiers
 * @pf_spec : printf corresponding specifier
 */

typedef struct specs
{
	char *spec;
	char *pf_spec;
} specs_t;

int		sum_them_all(const unsigned int n, ...);
void	print_numbers(const char *separator, const unsigned int n, ...);
void	print_strings(const char *separator, const unsigned int n, ...);
void	print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
