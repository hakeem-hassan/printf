#include "main.h"

/*
 * check - checks for format specifier.
 * @format: string to check.
 * @arguments: a buffer like space.
 * @count: tracks the length of string.
 *
 * Return: 1 0n success.
 */
int check(const char *format, va_list arguments, int count)
{
	spec *data;

	data = {{'s', _print_s},
		{'i', _print_i},
		{'d', _print_i}
		}

	int  i = 0;
	while(*format != '\0')
	{
		if(data[i].c == format[count])
		{
			count++;
		}
	}

}
/*
 * _print_s - prints string to stdout.
 * @string: string to be printed.
 *
 * return: return 1 on success.
 */
void _print_s(char *string)
{
	int len = 0;

	while (string[len] != '\0')
	{
		len++;
		write(1, string, len);
	}
}
/*
 * _print_i - prints int to stdout.
 * @num: integers to print in base 10.
 *
 * return: 1 on success.
 */
void _print_i(int num)
{
	/* write your code */
	write(1, &num, 4);
}
