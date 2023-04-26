#include "main.h"

/**
 * print_rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */

int print_rot13(va_list args)
{
	char *s;
	char *aux;
	int i = 6;

	s = va_arg(args, char*);
	if (s)
	{
	aux = rot13(s);
	i = printarg(aux);
	}
	else
	printarg("(null)");
	return (i);
}
