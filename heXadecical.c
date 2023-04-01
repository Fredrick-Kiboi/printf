#include "main.h"

/**
 * for_heXadecimal - printing X of numbers
 * @ap: arguments
 * Return: 0
 */

int for_heXadecimal(va_list ap)
{
	int count = 0, c, j, *y;
	long int x = va_arg(ap, long int);

	if (x < 0)
	{
		putchar('-');
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
		{
			if (y[j] == 10)
				_putchar('A');
			else if (y[j] == 11)
				_putchar('B');
			else if (y[j] == 12)
				_putchar('C');
			else if (y[j] == 13)
				_putchar('D');
			else if (y[j] == 14)
				_putchar('E');
			else if (y[j] == 15)
				_putchar('F');
			else
				_putchar(y[j] + '0');
		}
	}
	return (0);
}
