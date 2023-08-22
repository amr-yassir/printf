#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _specifier(char specifier, va_list p);
int print_char(char c);
int print_str(char *s);
int print_dig(int n);


#endif