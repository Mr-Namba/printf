#include "main.h"

void print_output(char output[], int *output_len);

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	char output[BUFF_SIZE];
	int output_len = 0;
	int i, res;

	if (!format)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i]; i++) {
		if (format[i] == '%') {
			/* process format specifier */
			i++;
			if (!format[i])
				break;

			res = handle_format_specifier(format, &i, &args, output, &output_len);
			if (res < 0)
				return (-1);
			else
				output_len += res;
		} else {
			/* add non-format characters to output */
			if (output_len == BUFF_SIZE)
				print_output(output, &output_len);

			output[output_len++] = format[i];
		}
	}

	va_end(args);

	print_output(output, &output_len);

	return (output_len);
}

/**
 * print_output - helper function to print output
 * @output: output buffer
 * @output_len: pointer to output length
 */
void print_output(char output[], int *output_len)
{
	if (*output_len == 0)
		return;

	write(1, output, *output_len);
	*output_len = 0;
}
