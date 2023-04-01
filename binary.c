#include "main.h"

/**
 * for_binary - prints bunary
 * @ap: list of arguments
 * Return: 0
 */

int for_binary(va_list ap)
{
	long int x = va_arg(ap, long int);
	int count = 0, c, *y, j;

	if (x < 0)
	{
		_putchar('-');
		x = -x;
		count++;
	}
	if (x == INT_MAX)
	{
		count = sizeof(int) * 8 - 1;
	}
	else if (x <= -INT_MAX)
	{
		count = sizeof(long int) * 8;
	}
	else
	{
		long int a = x;
		long int b = x;

		while (a > 0)
		{
			a /= 2;
			count++;
		}
		y = (int*) malloc(count * sizeof(int));

		for (c = 0; c < count; c++)
		{
			y[c] = b % 2;
			b /= 2;
		}
		for (j = count - 1; j >= 0; j--)
		{
			_putchar(y[j] + '0');
		}
	}
	return (0);
}
