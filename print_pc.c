#include "main.h"

/**
 * print_pc - prints character % to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed
 */

int print_pc(va_list args __attribute__((unused)))
{
	char *p;
	int i;

	p = "%";
	i = _putchar(p);

	return (i);
}
