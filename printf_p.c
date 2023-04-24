#include "main.h"

/**
 * printf_p - Handle the following conversion specifier: p
 * @val: arguments.
 * Return: counter.
 */
int printf_p(void *p)
{
	char *s = "(null)";
	long int a;
	int b;
	int i;

	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	return (b + 2);
}
