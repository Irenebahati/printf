#include "main.h"
#include <stdio.h>

/**
 * _printf - produces output according to the function
 * @format: is a character string, it's composed of zero or more directives
 *
 * Return: returns the number of characters printed
 *
 */

int _printf(const char *format, ...)
{
	va_list arguments;
	unsigned int out_put = 0;
	unsigned int i = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arguments, format);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] == '\0' || (format[i] == '%' && !format[i + 1]))
		{
			return (-1);
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' ||
			format[i + 1] == 'i' || format[i + 1] == 's' ||
			format[i + 1] == 'c' || format[i + 1] == '%'))
		{
			out_put += (*specifier(format[i + 1]))(arguments);
			i++;
		}
		else
		{
			out_put += _putchar(format[i]);
		}
	}
	va_end(arguments);

	return (out_put);
}
