#include "main.h"

/**
 * print_dig - prints a decimal number
 * @n: input
 * Return: size of output
*/

int print_dig(long n, int base)
{
	int ctr;
	char *s = "0123456789";

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
