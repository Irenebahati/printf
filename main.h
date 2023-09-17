#ifndef main_h
#define main_h

#include <unistd.h>
#include <stdio.h>
#include <starg.h>
#include <string.h>
/**
 * struct format - structure
 * @F: char holding the format
 * @T: pointer function
 */

typedef struct format
{
	char F;
	int (*T)(va_list);
} fmt;

int _printf(const char *format, ...);

#endif
