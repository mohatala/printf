#include "main.h"
/**
 * printf_s - print a string.
 * @v: argumen t.
 * Return: the length of the string.
 */

int printf_str(char *str)
{
	char *str;
	int i, len;

	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
