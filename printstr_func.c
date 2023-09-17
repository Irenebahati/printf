#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 *
 * Return: 1 if successful, -1 if unsuccessful.
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}

/**
 * printstr_func - gets the character array
 * @str_list: string to be printed
 * Return: return string
 */

int printstr_func(va_list str_list)
{
	int i = 0;
	char *s = va_arg(str_list, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
