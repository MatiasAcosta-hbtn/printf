#include "holberton.h"

/**
 * _print_hexa - print an hexa in cap
 * @args: the number passed
 * Return: Nothing.
 */

void _print_hexa(unsigned int args)
{
	int i = 0, length = 0, res = 0, j = 0;
	unsigned int n = args;
	char *string;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n <= 16)
		_putchar('0');
	length = hexa_length(n);
	string = malloc((length * sizeof(char)) + 1);
	if (string == NULL)
		return;
	i = length - 1;
	while (n > 0)
	{
		if (n <= 16)
		{
			if (n < 10)
				string[i] = n + 48;
			else
				string[i] = hexa_cap(n);
			break;
		}
		res = n % 16;
		if (res >= 10)
			string[i] = hexa_cap(res);
		else
			string[i] = res + 48;
		n /= 16;
		i--;
	}
	for (j = 0; j < length; j++)
		_putchar(string[j]);
	free(string);
}

/**
 * print_string_ascii - print an string
 * @args: argument passed
 * Return: the count of characters printed
 */

int print_string_ascii(va_list args)
{
	int i = 0, count = 0;
	char *string;

	string = va_arg(args, char*);
	if (string == NULL)
		return (-1);
	if (string[0] == '\0')
		return (0);
	while (string[i] != '\0')
	{
		if ((string[i] > 0 && string[i] <= 32) || string[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_print_hexa(string[i]);
			count += 4;
		}
		else
		{
			_putchar(string[i]);
			count++;
		}
		i++;
	}
	return (count);
}
