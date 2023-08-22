#include "main.h"

/**
 * _printf - prints whatever you specify
 * @format: pointer to the input
 * Return: size of printed output
*/

int _printf(const char *format, ...)
{
	va_list p;
	int ctr = 0;

	if (format == NULL)
		return (-1);
	va_start(p, format);
	while (*format)
	{
		if (*format == '%')
			ctr += _specifier(*++format, p);
		else
			ctr += write(1, format, 1);
		++format;
	}
	va_end(p);
	return (ctr);
}
