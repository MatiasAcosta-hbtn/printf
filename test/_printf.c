#include "holberton.h"

/**
 * _printf - the printf function
 * @format: the string
 * Return: the characters printed
 */

int auxiliar(const char *format, va_list args, op_t *options)
{
	int flag = 0, i = 0, j = 0, count = 0;	

	while (format[i] != '\0' && format)
	{
		flag = 0;
	if (format[i] == '%')
	{
		while (options[j].c != '\0')
		{
			if (format[i + 1] == options[j].c)
			{
				flag = 1;
				count += options[j].func(args);
				break;
			}
			j++;
		}
	}
	if (flag == 1)
	{
		if (format[i + 1] == '\0' || format[i + 2] == '\0')
			return (count);
		i += 2;
	}
	else
	{
		write(1, &format[i], 1);
		i++;
		count++;
	}
	j = 0;
	}
	return (count);
}

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	op_t options[] = {
		{'%', print_percent}, {'c', print_char}, {'s', print_string},
		{'d', print_integer}, {'i', print_integer}, {'b', print_binary},
		{'u', print_uns_int}, {'o', print_octal}, {'x', print_hexa},
		{'X', print_hexa_cap}, {'r', print_reversed},{'R', print_rot13},
		{'\0', NULL}
};
	va_start(args, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	count = auxiliar(format, args, options);
	va_end(args);
	return (count);
}
