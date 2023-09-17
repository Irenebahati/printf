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
	unsigned int output = 0;
	unsigned int n = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arguments, format);
	for (; format[n] != '\0'; n++)
	{
		if (format[n] == '\0' || (format[n] == '%' && !format[n + 1]))
		{
			return (-1);
		}
		else if (format[n] == '%' && (format[n + 1] == 'd' ||
			format[n + 1] == 'i' || format[n + 1] == 's' ||
			format[n + 1] == 'c' || format[n + 1] == '%'))
		{
			output += (*converter(format[n + 1]))(arguments);
			n++;
		}
		else
		{
			output += _putchar(format[n]);
		}
	}
	va_end(arguments);

	return (output);
}
