#ifndef main_H
#define main_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_p(void *p);
int printf_S(char *str);
int printf_X(unsigned int num);
int printf_x(unsigned int num);
int printf_o(unsigned int num);
int printf_u(unsigned int n);
int printf_b(unsigned int num);
int printf_r();
int printf_rot13();
int printf_i(int n);
int printf_d(int n);
int printf_percent(void);
int printf_str(char *str);
int _strlen(char *s);
int printf_hex_aux(unsigned long int num);
#endif
