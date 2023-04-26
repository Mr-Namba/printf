#include "main.h"

/**
 * print_add - print the address of a string
 * @args: va_list
 * Return: i
*/
int print_add(va_list args)
{
	int i;
	unsigned int var;
	char *buffer;

	var = va_arg(args, int);
	buffer = change_hex_low(var, 16);
	i = printarg("0x");
	i += printarg(buffer);
return (i);
}

