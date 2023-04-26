#include "main.h"

/**
 * print_bin - converts an integer to binary
 * @args: va_list
 * Return: i
*/
int print_bin(va_list args)
{
	int i;
	unsigned int numb;
	char *buffer;

	numb = va_arg(args, int);
	buffer = change_base(numb, 2);
	i = printarg(buffer);
	return (i);
}
