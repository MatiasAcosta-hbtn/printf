#include "holberton.h"

/**
 * num_div - return the length of a number
 * @n: the number
 * Return: the length
 */

int num_div(int n)
{
	int length = 1, i = 1;

	while (n / 10 != 0)
	{
		length++;
		n /= 10;
	}
	while (length - 1 > 0)
	{
		i *= 10;
		length--;
	}
	return (i);
}

/**
 * uns_length - return the length of a number
 * @n: the number
 * Return: the length
 */

int uns_length(unsigned int n)
{
	 int length = 1;

	while (n / 10 != 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

/**
 * bin_length - return the length of a number convert to binary
 * @n: the number
 * Return: the length
 */

int bin_length(int n)
{
	int count = 0;

	while (n > 0)
	{
		n /= 2;
		count++;
	}
	return (count);
}

/**
 * octal_length - return the length of a number convert to octal
 * @n: the number
 * Return: the length
 */

int octal_length(unsigned int n)
{
	int count = 0;

	while (n > 0)
	{
		if (n <= 8)
		{
			count++;
			break;
		}
		n /= 8;
		count++;
	}
	return (count);
}
