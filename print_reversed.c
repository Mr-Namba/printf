#include "main.h"

/**
 * print_reversed - prints a string in reverse
 * @args: va_list
 * Return: i
 */

int print_reversed(va_list args)
{
	char *s;
	int i, j;

	s = va_arg(args, char*);

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	for (j = i; j > 0; j--)
	{
		s--;
		_putchar(s);
	}
	return (i);
}
