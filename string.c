#include "main.h"

/**
 * for_string - handles strings
 * @ap: argument
 * Return: number of characters
 */

int for_string(va_list ap)
{
	int r;
	char *b;

	b = va_arg(ap, char *);
	for (r = 0; b[r] != '\0'; r++)
	{
		_putchar(b[r]);
	}
	return (r);
}
