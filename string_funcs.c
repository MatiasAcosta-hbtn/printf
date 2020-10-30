#include "holberton.h"

/**
 * print_char - print a character
 * @args: the argument passed
 * Return: the count of element printed
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_string - print an string
 * @args: the argument passed
 * Return: the count of element printed
 */

int print_string(va_list args)
{
	char *s;
	int n = 0;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	n = _strlen(s);
	write(1, s, n);
	return (n);
}

/**
 * print_percent - print a percent
 * @args: argument passed
 * Return: the count of element printed
 */

int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
 * print_reversed - print an string reversed
 * @args: the argument passed
 * Return: the count of element printed
 */

int print_reversed(va_list args)
{
	char *string;
	int length = 0, i = 0;

	string = va_arg(args, char *);
	length = _strlen(string);
	for (i = length - 1; i >= 0; i--)
		_putchar(string[i]);
	return (length);
}

/**
 * print_rot13 - print an string in rot13
 * @args: argument passed
 * Return: the count of element printed
 */

int print_rot13(va_list args)
{
	int i = 0, j = 0;
	char letras[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char root13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
		return (-1);
	while (string[i])
	{
		for (j = 0; j <= 51; j++)
		{
			if (string[i] == letras[j])
			{
				_putchar(root13[j]);
				break;
			}
		}
		i++;
	}
	return (i);
}
