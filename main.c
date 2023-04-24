#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    void *addr;

    addr = (void *)0x7ffe637541f0;
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    _printf("%b\n", 98);
    _printf("Address:[%p]\n", addr);
    return (0);
}