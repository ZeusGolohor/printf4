#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
int _printf(const char *format, ...);
void sw(const char *format, unsigned int i, unsigned int len, va_list list);
int _putchar(char c);
#endif
