#include "main.h"

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
void _print_i(int *num)
{
	/* write your code */
	write(1, num, 4);
}
