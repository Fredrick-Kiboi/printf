#include "main.h"

/**
 * for_rot13ed - prints the rot13'ed string
 * @ap: arguments
 * Return: num
 */

int for_rot13ed(va_list ap)
{
	int g, f, num = 0, k = 0;

	char *r = va_arg(ap, char *);
	char ls[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char arr[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (r == NULL)
		r = "(null)";
	for (f = 0; r[f]; f++)
	{
		k = 0;
		for (g = 0; ls[g] && !k; g++)
		{
			if (r[f] == ls[g])
			{
				_putchar(arr[g]);
				num++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(r[f]);
			num++;
		}
	}
	return (num);
}
