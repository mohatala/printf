#ifndef main_H
#define main_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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
int printf_c(char c);
int printf_str(char *str);
int _strlen(char *s);
#endif
