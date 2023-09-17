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

#endif
