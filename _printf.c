#include "main.h"

/**
 * _printf - implements the print function
 * @format - identifier
 * Return: the length of a string
 */

int _printf(const char *format, ...)
{
	switch_conversion s[] = {
		{"%c", for_char}, {"%s", for_string},
		{"%'%'", for_percent}, {"%d", for_decimal},
		{"%i", for_int}
	};
		
	va_list ap;
	int a, b, c, len;
	b = 0;
	c = (sizeof(s) / sizeof(s[0]));
	len = 0;
	
	va_start(ap, format);
	if (format == NULL)
		return (-1);

	while (format[b] != '\0')
	{
		for (a = 0; a < c; a++)
		{
			if (s[a].q[0] == format[b] && s[a].[q][1] == format[b + 1])
			{
				len += s[a].p(ap);
			}
		}
		_putchar(format[b]);
		len++;
		b++;
	}
	va_end(ap);
	return (len);
}
