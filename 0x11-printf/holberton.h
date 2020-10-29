#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFSIZE 1024
#define SPECIFIERS_SIZE 14
#define LENGTH_SPECS_SIZE 8
#define FLAGS_SPECS_SIZE 6

#define ERROR -2
#define INVALID -1
#define EMPTY 0
#define OK 1

/**
 * struct spec_data - specifiers data
 *
 * @spec_flags: - +   0 ' #
 * @spec_width: minimum number of characters to output
 * @spec_prec: maximum limit on the output, depending on the type
 * @spec_length: hh h l ll L z j t
 * @fmt_spec: % d,i u f,F e,E g,G x,X o s,S c p a,A n b r,R
 * @fmt_len: length of the format specifier
 * @status: return value of extract functions
 */

typedef struct spec_data
{
	char fmt_spec;
	char *spec_length;
	int spec_prec;
	int spec_width;
	char *spec_flags;
	int fmt_len;
	int status;
} spec_data_t;

/**
 * struct pf_buf - _printf buffer
 *
 * @buf: the buffer
 * @len: the size of the string to add to main buffer
 * @index: index of last char in main buffer
 */

typedef struct pf_buf
{
	char *buf;
	int len;
	int index;
} pf_buf_t;

/**
 * struct specs - specifiers structure containing associated funcions
 *
 * @spec: the specifier
 * @func: the print function associated to the specifier
 */

typedef struct specs
{
	char spec;
	pf_buf_t *(*func)(va_list, spec_data_t*);
} specs_t;


/* UTILS */
int _putchar(char c);
void _puts(char *str);
int _strlen(char *str);
char *_strcat(char *s1, char *s2);
char *_charcat(char *str, char c);
char *_strdup(char *str);
int _isalpha(int c);
int _islower(int c);
int _isdigit(int c);
int _strnchr(char *s, char c, unsigned int n);
void rev_string(char *str);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int size);
char *_strchr(char *s, char c);
int _strcmp(char *s1, char *s2);
int _atoi(char *s);
char *_itoa(int i);
char *_uitoa(unsigned int i);
char *_chartohex(int ch);
char *_dectohex(unsigned int uint, int upper);
char *_dectooct(unsigned int uint);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *_ptrtohex(void *ptr);

/* PRINTF */
int _printf(const char *format, ...);
int spec_eng(va_list list, spec_data_t *data, pf_buf_t *buffer);
int is_in_format_specifiers(char c);
int format_parsing(int *i, const char *format, pf_buf_t *buf, va_list list);

pf_buf_t *store_char(va_list c, spec_data_t *data);
pf_buf_t *store_string(va_list str, spec_data_t *data);
pf_buf_t *store_int(va_list list, spec_data_t *data);
pf_buf_t *store_rev(va_list str, spec_data_t *data);
pf_buf_t *store_rot13(va_list str, spec_data_t *data);
pf_buf_t *store_binary(va_list list, spec_data_t *data);
pf_buf_t *store_strnop(va_list list, spec_data_t *data);
pf_buf_t *store_uint(va_list list, spec_data_t *data);
pf_buf_t *store_uoct(va_list list, spec_data_t *data);
pf_buf_t *store_lowuhex(va_list list, spec_data_t *data);
pf_buf_t *store_upuhex(va_list list, spec_data_t *data);
pf_buf_t *store_ptr(va_list list, spec_data_t *data);

/* SPEC_DATA_T */
int spec_data_t_parse(spec_data_t *data, const char *format);
spec_data_t *spec_data_t_new(void);
void *spec_data_t_delete(spec_data_t *data);
int spec_data_t_leave(char *str, int status);

/* PF_BUF_T */
pf_buf_t *pf_buf_t_new(size_t size);
void *pf_buf_t_delete(pf_buf_t *buffer);
void pf_buf_t_add_char(pf_buf_t *buffer, char to_add);
void pf_buf_t_flush(pf_buf_t *buffer);
void pf_buf_t_print(pf_buf_t *buffer);

/* SPECIFIERS */
char *extract_format(const char *format, int size);
char *extract_length(char *str, spec_data_t *data);
int extract_prec(char *str, spec_data_t *data);
int extract_width(char *str, spec_data_t *data);
char *extract_flags(char *str, spec_data_t *data);

#endif
