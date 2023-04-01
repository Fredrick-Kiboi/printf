#include "main.h"

/**
 * for_reverse - reverses string
 * @ap: arguments put
 * Return: 0
 */

int for_reverse(va_list ap)
{
	int k, g = 0;
	char *r = va_arg(ap, char *);

	if (r == NULL)
	{
		r = "(null)";
	}
	while (r[g] != '\0')
		g++;
	for (k = g -1; k >= 0; k--)
	{
		_putchar(r[k]);
	}
	return (g);
}
