#include "main.h"

/**
 * for_char - it prints letter
 * @ap: argument
 * Return: size
 */

int for_char(va_list ap)
{
	char r;

	r = va_arg(ap, int);
	_putchar(r);
	return (0);
}
