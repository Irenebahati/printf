#include "main.h"

/**
 * specifier - pointer to function
 * @s: formats
 *
 * Return: returns func ptr (int(*)(va_list))
 */

int (*specifier(char s))(va_list)
{
	fmt types_array[] = {
		{'d', print_digit},
		{'i', print_digit},
		{'c', printchar_func},
		{'s', printstr_func},
		{'%', percentage_func},
		{'\0', NULL}
	};

	int i = 0;

	for (; types_array[i].C != '\0'; i++)
	{
		if (types_array[i].C == s)
		{
			break;
		}
	}
	return (types_array[i].P);
}
