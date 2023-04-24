#ifndef main_H
#define main_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct format - specify type of format
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function needed
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} type_match;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_p(va_list val);
int printf_task5(va_list val);
int printf_X(va_list val);
int printf_x(va_list val);
int printf_o(va_list val);
int printf_u(va_list args);
int printf_b(va_list val);
int printf_r(va_list args);
int printf_rot13(va_list args);
int printf_i(va_list args);
int printf_d(va_list args);
int printf_percent(void);
int printf_c(va_list val);
int printf_str(va_list val);
int _strlen(char *s);
#endif
