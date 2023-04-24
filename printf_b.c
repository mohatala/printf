#include "main.h"

/**
 * printf_b - prints a binary number.
 * @num: arguments.
 * Return: 1.
 */
int printf_b(unsigned int num)
{
	int flag = 0;
	int count = 0;
	int i, a = 1, b;
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
