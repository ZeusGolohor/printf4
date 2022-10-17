#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
/**
  * struct snf - struct snf.
  * @symbol: first operand.
  * @function: second operand.
  */
typedef struct snf
{
const char *symbol;
int (*function)(va_list);
} s_f;
int (*get_snf_func(const char *s))(va_list);
int _putchar(char c);
int print_char(va_list list);
#endif
