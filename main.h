#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
void _print_i(int num);
void _print_s(char *string);

/*
 * struct spec - contains details of specifiers.
 * @fmt: format spec.
 * @f: function for conversion.
 */
typedef struct Spec;
struct Spec
{
	char fmt;
	int (*f)(va_list);
}spec;
#endif
