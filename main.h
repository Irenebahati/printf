#ifndef main_h
#define main_h

#include <unistd.h>
#include <stdio.h>
#include <starg.h>
#include <string.h>
/**
 * struct format - structure
 * @C: character holding the format
 * @P: pointer function
 */

typedef struct format
{
	char C;
	int (*P)(va_list);
} fmt;

int _printf(const char *format, ...);
int _putchar(char c);
int printstr_func(va_list str_list);
int printchar_func(va_list char_list);
int percentage_func(__attribute__((unused))va_list param);
int (*specifier(char s))(va_list);
#endif
