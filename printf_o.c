#include "main.h"

/**
 * printf_o - prints an octal number.
 * @num: parametre.
 * Return: counter.
 */
int printf_o(unsigned int num)
{
	int i;
	int *array;
	int count = 0;
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
