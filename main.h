#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <limits.h>
#include <ctype.h>

/**
 * struct format - format is the name of the function
 * @q: 1st argument
 * @p: 2nd argument
 * Description: struct
 */
typedef struct format
{
	char *q;
	int (*p)();
} switch_conversion;

int for_char(va_list ap);
int _putchar(char c);
int for_decimal(va_list ap);
int for_string(va_list ap);
int for_percent(void);
int for_int(va_list ap);
int _printf(const char *format, ...);
int for_binary(va_list ap);
int for_octal(va_list ap);
int for_hexadecimal(va_list ap);
int for_heXadecimal(va_list ap);
int for_reverse(va_list);
int for_rot13ed(va_list ap);
int for_unsigned(va_list ap);

#endif
