#include "main.h"

/**
 * _specifier - handle the format of output
 * @specifier: checked format
 * @p: pointer to next argument
 * Return: size ctr
*/

int _specifier(char specifier, va_list p)
{
	int ctr = 0;

	switch (specifier)
	{
		case 'c':
			ctr += print_char(va_arg(p, int));
			break;
		case 's':
			ctr += print_str(va_arg(p, char *));
			break;
		case 'S':
			ctr += print_0xS(va_arg(p, char *));
			break;
		case 'd':
		case 'i':
			ctr += print_dig((long)va_arg(p, int), 10);
			break;
		case 'b':
			ctr += print_dig((long)va_arg(p, unsigned int), 2);
			break;
		case 'u':
			ctr += print_p_dig((long)va_arg(p, unsigned int));
			break;
		case 'o':
			ctr += print_dig((long)va_arg(p, unsigned int), 8);
			break;
		case 'x':
			ctr += print_dig((long)va_arg(p, unsigned int), 16);
			break;
		case 'X':
			ctr += print_HEX((long)va_arg(p, unsigned int));
			break;
		case 'r':
			ctr += print_rev(va_arg(p, char *));
			break;
		case 'R':
			ctr += print_rot(va_arg(p, char *));
			break;
		default:
			ctr += write(1, &specifier, 1);
			break;
	}
	return (ctr);
}
