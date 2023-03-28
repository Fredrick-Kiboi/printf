#include "main.h"

/**
 * for_percent - prints a percent sign
 * @ap: list of arguments
 * Return: number of characters printed
 */

int for_percent(va_list ap)
{
	char l = va_arg(ap, int);
	int count = 0;
	
	if (l == '%')
	{
		putchar('%');
		count++;
	}
	printf("%d", count);
	return (0);
}
