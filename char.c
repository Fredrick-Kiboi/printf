#include "main.h"

/**
 * for_char - it prints letter
 * @ap: argument
 * Return: size
 */

int for_char(va_list ap)
{
	int k;
	char r;

	k = 0;
	r = va_arg(ap, int);
	_putchar(r);
	k++;
	printf("%d", k);
	return (0);
}
