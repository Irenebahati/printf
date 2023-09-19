#include <stdarg.h>
#include "main.h"

/**
 * print_num - func, get integer variable
 * @int_list: var list
 *
 * Return: returns int
 */

int print_num(va_list int_list)
{
	int i, div, len;
	unsigned int num;

	i = va_arg(int_list, int);
	div = 1;
	len = 0;

	if (i < 0)
	{
		len += _putchar('-');
		num = i * -1;
	}
	else
	{
		num = i;
	}

	for (; num / div > 9;)
	{
		div *= 10;
	}

	for (; div != 0;)
	{
		len += _putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}

	return (len);
}
