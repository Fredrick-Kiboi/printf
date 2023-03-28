#include "main.h"

/**
 * for_string - handles strings
 * @ap: argument
 * Return: number of characters
 */

int for_string(va_list ap)
{
	char *f;
	int n;

	f = va_arg(ap, char *);
	n = 0;
	while (*f != '\0')
	{
		_putchar(*f);
		f++;
		n++;
	}
	printf("%d", n);
	return (0);
}
