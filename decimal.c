#include "main.h"

/**
 * for_decimal - decimal is returned
 * @ap: arguments
 * Return: decimal
 */

int for_decimal(va_list ap)
{
	int f, k, sum;

	g = va_arg(ap, int);
	f = ((g / 10) * 10);
	k = g % 10;
	sum = (f + k);
	return (sum);
}
