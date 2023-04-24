#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: is a character string.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	va_list argz;
	int len = 0;

	va_start(argz, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					len += _putchar(va_arg(argz, int));
					break;
				case 's':
					len += printf_str(va_arg(argz, char *));
					break;
				case 'b':
					len += printf_b(va_arg(argz, unsigned int));
					break;
				default:
					len += _putchar('%');
					len += _putchar(*(format - 1));
					break;
			}
		}
		else
		{
			len += _putchar(*format);
		}
		format++;
	}
	va_end(argz);
	return (len);
}
