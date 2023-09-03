#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: string
 *
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * print_str - prints a string
 * @s: pointer to array of char
 * Return: size of string
*/

int print_str(char *s)
{
	int ctr = 0;

	while (*s)
		ctr += write(1, s++, 1);

	return (ctr);
}

/***/

int print_0xS(char *s)
{
	return (0);
}
