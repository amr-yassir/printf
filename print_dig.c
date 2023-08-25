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
 * Return: size of output
*/

int print_p_dig(long n)
{
	if (n < 0)
		return (print_dig(-n, 10));
	else
		return (print_dig(n, 10));
}

/**
 * print_HEX - prints numbers in HEX
 * @n: input
 * Return: size of output
*/

int print_HEX(unsigned int n)
{
	int ctr = 0;
	int r, i = 0, j;
	int *hex = NULL;

	hex = (int *)malloc(sizeof(int) * 40);
	if (hex == NULL)
		return (0);
	else
		while (n != 0)
		{
			r = n % 16;
			if (r < 10)
			{
				hex[i] = 48 + r;
				i++;
			}
			else
			{
				hex[i] = 55 + r;
				i++;
			}
			n /= 16;
		}
		for (j = i - 1; j >= 0; j--)
			ctr += print_char(hex[j]);
		free(hex);
		return (ctr);
}
