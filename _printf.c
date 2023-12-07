#include "main.h"

/*
 * _printf - prints a x to a standard output.
 * @format: A place holder for the text.
 *
 * Description: printf helps to write to stdout,
 * return  always 0 on success.
 * on error -1 is returned.
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list arguments;

	if (format == NULL)
		return (-1);

	va_start(arguments, format);

	while (*format)
	{
		if (*format != '%')
			write(1, format, 1);
		else
		{
			format++; /*if % sign found, check next character*/
			if (*format == '\0')
				break;
			if (*format == '%')
				write(1, format, 1);
				count++;
			else if (*format == 'c')
				char c = va_arg(arguments, int);

				write(1, &c, 1);
				count++;
			else if (*format == 's')
				char *string = va_arg(arguments, char*);

				_print_s(string);
			else if (*format == 'i')
				int *num = va_arg(arguments, int*);

				_print_i(num);
		}
	}
return (0);
}
