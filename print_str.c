#include "main.h"

/**
 * print_str - prints a variadic string each per time to stdout
 * @args: variadic parameter
 *
 * Return: number of characters printed on Success
 * upon failure -1
 */

int print_str(va_list args)
{
	int i = 6;
	char *str;

	str = va_arg(args, char*);
	if (str)
	{
		i = printarg(str);
	}
	else
	{
		printarg("(null)");
	}

	return (i);
}
