#include "main.h"

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
	int i = 0;

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
