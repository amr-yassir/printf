#include "main.h"

/**
 * print_dig - prints a decimal number
 * @n: input
 * Return: size of output
*/

int print_dig(int n)
{
	int ctr = 0;
	char *s = "0123456789";

	if (n < 0)
	{
		write(1, "-", 1);
		return (print_dig(-n) + 1);
	}
	else if (n < 10)
		return (print_char(s[n]));
	else
	{
		ctr += print_dig(n / 10);
		return (ctr + print_dig(n % 10));
	}
}
