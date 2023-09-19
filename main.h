#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* THE FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* THE SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
int handlePrint_func(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/****************** ALL FUNCTIONS ******************/

/* Functions, output characters and strings */
int printChar_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printString_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printPercent_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Functions, output numbers */
int printInt_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printBinary_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printUnsigned_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printOctal_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printHexadecimal_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int printHexaUpper_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int printHexa_func(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function, output non-printable chars */
int printNonPrintable_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Function, output memory address */
int printPointer_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funciotns, handles other specifiers */
int getFlags_func(const char *format, int *i);
int getWidth_func(const char *format, int *i, va_list list);
int getPrecision_func(const char *format, int *i, va_list list);
int getSize_func(const char *format, int *i);

/*Function, output string in reverse*/
int printReverse_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function, output a string in rot 13*/
int printRot13string_func(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* The width handler */
int handleWriteChar_func(char c, char buffer[],
	int flags, int width, int precision, int size);
int writeNumber_func(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int writeNum_func(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int writePointer_func(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int writeUnsgnd_func(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

/****************** THE UTILS ******************/
int isPrintable_func(char);
int appendHexaCode_func(char, char[], int);
int isDigit_func(char);

long int convertSizeNumber_func(long int num, int size);
long int convertSizeUnsgnd_func(unsigned long int num, int size);

#endif
