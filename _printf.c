#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: is a character string.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	type_match type[] = {
		{"%s", printf_str}, {"%c", printf_c}
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
