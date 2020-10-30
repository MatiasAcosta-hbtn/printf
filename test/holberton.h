#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char);
/**
 * struct op - Short description
 * @c: character
 * @func: pointer to func
 *
 * Description: Longer description
 */
typedef struct op
{
	char c;
	int (*func)();
} op_t;
int print_percent(va_list);
int print_char(va_list);
int print_string(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_uns_int(va_list);
int print_octal(va_list);
int print_hexa(va_list);
int print_hexa_cap(va_list);
int print_reversed(va_list);
int print_rot13(va_list);
char hexa(int);
char hexa_cap(int);
int num_div(int);
int uns_length(unsigned int);
int bin_length(int);
int hexa_length(unsigned int);
int octal_length(unsigned int);
int _putchar(const char);
void _print_hexa(unsigned int);
int print_string_ascii(va_list);
#endif
