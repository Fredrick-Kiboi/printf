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

int _putchar(char c);

typedef struct format
{
	char *q;
	int (*p)();
} switch_conversion;

int for_char(va_list ap);
int for_decimal(va_list ap);
int for_string(va_list ap);
int for_percent(void);
int for_int(va_list ap);
int _printf(const char *format, ...);

#endif
