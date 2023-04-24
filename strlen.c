#include "main.h"

/**
 * _strlen - check the code
 *
 * @s: input value1.
 *
 * Return: lenght value;
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
