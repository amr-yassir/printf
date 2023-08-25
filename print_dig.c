#include "main.h"

/**
 * print_dig - prints digit based on base
 * @n: input
 * @base: the base
 * Return: size of output
*/

int print_dig(long n, int base)
{
	int ctr;
	char *s = "0123456789abcdef";

	if (n < 0)
	{
		write(1, "-", 1);
		return (print_dig(-n, base) + 1);
	}
	else if (n < base)
	{
		return (print_char(s[n]));
	}
	else
	{
		ctr = print_dig(n / base, base);
		return (ctr + print_dig(n % base, base));
	}
}

/**
 * print_p_dig - convert int to unsigned int
 * @n: input
*/

int print_p_dig(long n)
{
	if (n < 0)
		return (print_dig(-n, 10));
	else
		return (print_dig(n, 10));
}
