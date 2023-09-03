#include "main.h"

/**
 * _strlen - calulate the length of string
 * @s: the string
 *
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while(*s++)
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

/**
 * print_0xS - prints a string in a special way
 * @s: string
 *
 * Return: number of printed output
*/

int print_0xS(char *s)
{
	int ctr = 0;

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		if (*s < 32 || *s >= 127)
		{
			print_char('\\');
			print_char('x');
			ctr += 2;

			if (*s < 16)
			{
				print_char('0');
				ctr++;
			}
			ctr += print_HEX(*s);
		}
		else
		{
			print_char(*s);
			ctr++;
		}
		s++;
	}
	return (ctr);
}

/**
 * print_rev - prints string in reverse
 * @s: string
 *
 * Return: number of printed output
*/

int print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i--)
		print_char(s[i]);

	return (_strlen(s));
}
