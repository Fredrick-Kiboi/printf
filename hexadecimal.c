#include "main.h"

/**
 * for_hexadecimal - prints hexadecimals
 * @ap: arguments
 * Return: 0
 */

int for_hexadecimal(va_list ap)
{
	int count = 0, c, *y, j;
	long int x = va_arg(ap, long int);

	if (x < 0)
	{
		_putchar('-');
		x = -x;
		count++;
	}
	if (x == INT_MAX)
		count = sizeof(int) * 8 - 1;
	else if (x <= -INT_MAX)
		count = sizeof(long int) * 8;
	else
	{
		long int a = x, b = x;

		while (a > 0)
		{
			a /= 16;
			count++;
		}
		y = (int *) malloc(count * sizeof(int));

		for (c = 0; c < count; c++)
		{
			y[c] = b % 16;
			b /= 16;
		}
		for (j = count - 1; j >= 0; j--)
			if (y[j] == 10)
				_putchar('a');
			else if (y[j] == 11)
				_putchar('b');
			else if (y[j] == 12)
				_putchar('c');
			else if (y[j] == 13)
				_putchar('d');
			else if (y[j] == 14)
				_putchar('e');
			else if (y[j] == 15)
				_putchar('f');
			else
				_putchar(y[j] + '0');
	}
	return (0);
}
