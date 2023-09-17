#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * printchar_func - func, gets character variables
 * @char_list: chars to be printed
 * Return: returns char_list (list of character)
 */

int printchar_func(va_list char_list)
{
	char x = va_arg(char_list, int);

	return (_putchar(x));
}
