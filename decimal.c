#include "main.h"

/**
 * for_decimal - prints a decimal
 * @ap: arguments
 * Return: a decimal 
 */

int for_decimal(va_list ap)
{
	int n, count, i, divisor;
	n = va_arg(ap, int);

	count = 0;
	
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
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
		{
			divisor *= 10;
		}
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
