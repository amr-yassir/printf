#include "main.h"

/**
 * print_char - print a single character
 * @c: input
 * Return: size of output
*/

int print_char(char c)
{
	return (write(1, &c, 1));
}
