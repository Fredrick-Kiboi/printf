#include "main.h"

/**
 * for_unsigned - prints a numbers
 * @ap: arguments
 * Return: a number
 */

int for_unsigned(va_list ap)
{
	int count, i, divisor;
	unsigned int n;

	n = va_arg(ap, unsigned int);
	count = 0;
	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		int m = n;
		int num_digits = 0;

		while (m > 0)
		{
			m /= 10;
			num_digits++;
		}
		divisor = 1;
		for (i = 1; i < num_digits; i++)
			divisor *= 10;
		while (divisor > 0)
		{
			int digit = n / divisor;

			_putchar(digit + '0');
			n %= divisor;
			divisor /= 10;
			count++;
		}
	}
	return (count);
}
