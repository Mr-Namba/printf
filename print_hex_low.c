#include "main.h"

/**
* print_hex_low - prints an octal number.
* @args: arguments to print.
* Return: number of characters printed.
*/
int print_hex_low(va_list args)
{
	char *str;
	unsigned int num2;
	int i = 0;

	num2 =  va_arg(args, int);
	str = change_hex_low(num2, 16);
	i += printarg(str);
return (i);
}
