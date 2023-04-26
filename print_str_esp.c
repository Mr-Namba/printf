#include "main.h"

/**
* print_str_esp - prints an octal number.
* @args: arguments to print.
* Return: number of characters printed.
*/
int print_str_esp(va_list args)
{
	char *s;
	int i = 6;

	s = va_arg(args, char*);
	if (s)
	{
	s = replace_str(s);
	i = printarg(s);
	}
	else
	printarg("(null)");
return (i);
}
