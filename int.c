#include "main.h"

/**
 * for_int - prints an integer
 *
 * @ap: the arguments
 * Return: sum
 */

int for_int(va_list ap)
{
	int f, sum, k, g, n;
	char *r;

	if ((isdigit(va_arg(ap, int))))
	{
		g = va_arg(ap, int);
		f = ((g / 10) * 10);
		k = g % 10;
		sum = (f + k);
	}
	else if ((isalpha(va_arg(ap, char *))))
	{
		sum = 0;
		r = va_arg(ap, char *);
		for (n = 0; r[n] != '\0'; n++)
		{
			_putchar(r[n]);
			sum++;
		}
	}
	else
	{
		;
	}
	return (sum);
}
