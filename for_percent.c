#include "main.h"

/**
 * for_percent - prints a percent sign
 * @ap: list of arguments
 * Return: number of characters printed
 */

int for_percent(va_list ap)
{
	int count = 0;
	putchar('%');
	count++;

	return (count);
}
