#include "holberton.h"

/**
 * _strlen - count the leng of s
 * @s: pointer received
 * Return: the lenght of the character received
 */
int _strlen(char *s)
{

int i = 0;

while (s[i] != 0)
	i++;
return (i);
}

/**
 * _putchar - print a letter
 * @c: the character
 * Return: the char
 */
int _putchar(const char c)
{
	return (write(1, &c, 1));
}
