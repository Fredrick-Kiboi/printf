#include "main.h"

/**
 * for_string - handles strings
 * @ap: argument
 * Return: number of characters
 */

int for_string(va_list ap)
{
	int r;
	char *f;

	f = va_arg(ap, char *);
	for (r = 0; f[r] != '\0'; r++)
	{
		if (f[r] == '%')
		{
			_putchar('%');
		}
		_putchar(f[r]);
	}
	return (r);
}
