#include "main.h"

/**
 * printf_c - prints a character.
 * @v: arguments.
 * Return: 1.
 */
int printf_c(va_list v)
{
	char s;

	s = va_arg(v, int);
	_putchar(s);
	return (1);
}
