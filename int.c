#include "main.h"

/**
 * for_int - prints an integer
 * @ap: arguments
 * Return: an integer
 */

int for_int(va_list ap)
{
	int a, g, count, z, b, m, q, l, r, n;

	a = 1;
	r = 0;
	n = va_arg(ap, int);
	m = n;
	z = n;

	while (m > 1)
	{
		m /= 10;
		r++;
	}
	
	l = r;
	count = l;
	while (r > 1)
	{
		a *= 10;
		--r;
	}
	g = a;

	while (l > 0)
	{
		q = z / g;
		b = (g * q);
		z -= b;
		g /= 10;
		--l;
		_putchar(q + '0');
	}
	return (count);
}
