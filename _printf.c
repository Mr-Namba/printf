#include "main.h"
/**
 * _printf - the printf function
 * @format: format string
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int i;
	int *tnc_printed;
	int *snc_printed;
	int tnc_ar[2];
	int snc_ar[2];
	char *cp_fmt;
	char sc_fmt[100000];
	va_list args;

	tnc_printed = &tnc_ar[0];
	snc_printed = &snc_ar[0];
	tnc_printed[0] = 0;
	tnc_printed[1] = -1;

	if (format != NULL)
	{
		tnc_printed[1] = 0;
		cp_fmt = _strcpy(sc_fmt, format);
		va_start(args, format);
		for (i = 0; cp_fmt[i] != '\0'; i++)
		{
			if (cp_fmt[i] == '%')
			{
				snc_printed = check_specifier(i, cp_fmt, args);
				if (snc_printed[1] == -1)
					return (-1);
				tnc_printed[1] += snc_printed[1];
				i += snc_printed[0];
			}
			else
			{
				tnc_printed[1] += _putchar(&cp_fmt[i]);
			}
		}
		va_end(args);
	}
	return (tnc_printed[1]);
}
