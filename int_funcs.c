#include "holberton.h"
#include <stdio.h>

/**
 * print_integer - print an integer
 * @args: the argument received
 * Return: the length of printed in console
 */

int print_integer(va_list args)
{
	long int num = 0, div = 1, count = 0;

	num = va_arg(args, int);

	if (num >= 0 && num <= 9)
	{
	_putchar('0' + num);
		return (1);
	}
	else if (num < 0)
	{
		_putchar('-');
		num = -num;
		count = 1;
	}
	if (num > 0)
	{
		while (div <= num)
			div *= 10;
		while (div > 1)
		{
			div /= 10;
			_putchar((num / div) + '0');
			num %= div;
			count++;
		}
	}
	return (count);
}

/**
 * print_binary - print a binary number
 * @args: the argument received
 * Return: the length of printed in console
 */

int print_binary(va_list args)
{
	int i = 0, res = 0, j = 0;
	int arr[40];
	unsigned int n;

	n = va_arg(args, int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		res = n % 2;
		arr[i] = res;
		n /= 2;
		i++;
	}
	if (i > 32)
		return (-1);
	for (j = i - 1; j >= 0; j--)
		_putchar(arr[j] + 48);
	return (i);
}

/**
 * print_uns_int - print an unsigned integer
 * @args: the argument received
 * Return: the length of printed in console
 */

int print_uns_int(va_list args)
{
	long int div = 1, count = 0;
	unsigned int num = 0;

	num = va_arg(args, unsigned int);

	if (num <= 9)
	{
		_putchar('0' + num);
		return (1);
	}
	while (div <= num)
		div *= 10;
	while (div > 1)
	{
		div /= 10;
		_putchar((num / div) + '0');
		num %= div;
		count++;
	}
	return (count);
}
/**
 * print_octal - print a number converted in octal
 * @args: the argument received
 * Return: the length of printed in console
 */

int print_octal(va_list args)
{
	int i = 0, length = 0, res = 0, j = 0;
	unsigned int n = 0;
	char *string;

	n = va_arg(args, unsigned int);
	length = octal_length(n);
	string = malloc(length * sizeof(char) + 1);
	i = length - 1;
	while (n > 0)
	{
		if (n <= 8)
		{
			string[i] = n + 48;
			break;
		}
		res = n % 8;
		string[i] = res + 48;
		n /= 8;
		i--;

	}
	for (j = 0; j < length; j++)
		_putchar(string[j]);
	free(string);
	return (length);
}
