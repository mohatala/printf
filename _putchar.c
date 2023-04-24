#include "main.h"
#include <unistd.h>
#define BUFFER_SIZE 1024

/**
 * _putchar - print character c
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	static char buf[BUFFER_SIZE];
	static int i=0;

	if (c == '\0' || i >= BUFFER_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != '\0')
	{
		buf[i] = c;
		i++;
	}
	return (1);
}
