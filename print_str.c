#include "main.h"

/**
 * _strlen - gets the lenght of a string
 * @s: string to be calculted
 * Return: length of the string s
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
	int i = _strlen(s);

	while (i--)
		print_char(s[i]);

	return (_strlen(s));
}

/**
 * print_rot - prints the rot13'ed string
 * @s: input
 *
 * Return: number of printed output
*/

int print_rot(char *s)
{
	int i;
	char ch;

	for (i = 0; s[i]; i++)
	{
		ch = s[i];
		if ((ch >= 'A' && ch <= 'M') || (ch >= 'a' && ch <= 'm'))
			print_char(ch + 13);
		else if ((ch >= 'N' && ch <= 'Z') || (ch >= 'n' && ch <= 'z'))
			print_char(ch - 13);
		else
			print_char(ch);
	}
	return (i);
}
