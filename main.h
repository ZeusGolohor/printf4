#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

int _printf(const char *format, ...);
/**
  * struct snf - struct snf.
  * @symbol: first operand.
  * @function: second operand.
  */
typedef struct snf
{
char *symbol;
int (*function)(va_list);
} s_f;
int _write_char(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_perc(va_list list);
#endif
