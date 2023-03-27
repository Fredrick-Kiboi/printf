#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
#include <limit.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
};

typedef struct format
{
	char *q;
	int (*p)();
} switch_conversion;

int for_char(va_list ap);
int for_string(va_list ap);

#endif
