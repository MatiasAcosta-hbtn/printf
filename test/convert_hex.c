#include "holberton.h"

/**
 * hexa_length - return the lenght of a number converted in hexa
 * @n: the number
 * Return: the length
 */

int hexa_length(unsigned int n)
{
	int count = 0;

	while (n > 0)
	{
		if (n <= 16)
		{
			count++;
			break;
		}
		count++;
		n /= 16;
	}
	return (count);
}

/**
 * hexa - return abcdef if number is > 10
 * @n: number
 * Return: the char
 */

char hexa(int n)
{
	switch (n)
	{
		case 10:
			return ('a');
		case 11:
			return ('b');
		case 12:
			return ('c');
		case 13:
			return ('d');
		case 14:
			return ('e');
		case 15:
		return ('f');
	}
	return ('N');
}

/**
 * print_hexa - print an hexadecimal number
 * @args: the number passed
 * Return: the length of number printed
 */

int print_hexa(va_list args)
{
	int i = 0, length = 0, res = 0, j = 0;
	unsigned int n = 0;
	char *string;

	n = va_arg(args, unsigned int);
	length = hexa_length(n);
	string = malloc((length * sizeof(char)) + 1);
	i = length - 1;
	while (n > 0)
	{
		if (n <= 16)
		{
			if (n < 10)
				string[i] = n + 48;
			else
				string[i] = hexa(n);
			break;
		}
		res = n % 16;
		if (res >= 10)
			string[i] = hexa(res);
		else
			string[i] = res + 48;
		n /= 16;
		i--;
	}
	for (j = 0; j < length; j++)
		_putchar(string[j]);
	free(string);
	return (length);
}

/**
 * hexa_cap - return abcdef if number is > 10
 * @n: number
 * Return: the char
 */

char hexa_cap(int n)
{
	switch (n)
	{
	case 10:
		return ('A');
	case 11:
		return ('B');
	case 12:
		return ('C');
	case 13:
		return ('D');
	case 14:
		return ('E');
	case 15:
		return ('F');
	}
	return ('N');
}

/**
 * print_hexa_cap - print an hexadecimal in cap letter
 * @args: the argument pased
 * Return: the length of number printed
 */

int print_hexa_cap(va_list args)
{
	int i = 0, length = 0, res = 0, j = 0;
	unsigned int n = 0;
	char *string;

	n = va_arg(args, unsigned int);
	length = hexa_length(n);
	string = malloc((length * sizeof(char)) + 1);
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
	return (length);
}
