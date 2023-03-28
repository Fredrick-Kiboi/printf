#include "main.h"

/**
 * for_int - prints an integer
 *
 * @ap: the arguments
 * Return: sum
 */

int for_int(va_list ap)
{
	int g = va_arg(ap, int);
	int f = ((g / 10) * 10);
	int k = g % 10;
	int sum = (f + k);
	printf("%d", sum);
	return (0);
}
