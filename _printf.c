#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: is a character string.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	type_match type[] = {
		{"%s", printf_s}, {"%c", printf_c},
		{"%%", printf_percent},
		{"%i", printf_i}, {"%d", printf_d}, {"%r", printf_r},
		{"%R", printf_rot13}, {"%b", printf_b}, {"%u", printf_u},
		{"%o", printf_o}, {"%x", printf_x}, {"%X", printf_X},
		{"%S", printf_task5}, {"%p", printf_p}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (type[j].id[0] == format[i] && type[j].id[1] == format[i + 1])
			{
				len += type[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
