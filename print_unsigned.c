#include "main.h"
/**
 * print_unsigned - prints an integer
 * @args: va_list
 * Return: number of characters printed
*/
int print_unsigned(va_list args)
{
	char *str;
	int i = 0;
	unsigned int num2;

	num2 =  va_arg(args, int);
	str = change_base(num2, 10);
	i += printarg(str);
return (i);
}
