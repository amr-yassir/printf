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
		case 'd':
		case 'i':
			ctr += print_dig((long)va_arg(p, int));
			break;
		default:
			ctr += write(1, &specifier, 1);
			break;
	}
	return (ctr);
}
