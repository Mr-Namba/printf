#include "main.h"

/**
 * print_char - Prints a variadic char to stdout
 * @args: Varadic parameter
 *
 * Return: number of char
 */

int print_char(va_list args)
{
	char c[2];
	int count = 0;

	c[1] = '\0';
	c[0] = (char)va_arg(args, int);
	count = _putchar(c);
	return (count);
}
