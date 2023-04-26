#include "main.h"

/**
* print_hex_upper - prints an octal number.
* @args: arguments to print.
* Return: number of characters printed.
*/
int print_hex_upper(va_list args)
{
	char *str;
	unsigned int num2;
	int i = 0;

	num2 =  va_arg(args, int);
	str = change_base(num2, 16);
	i += printarg(str);
return (i);
}
