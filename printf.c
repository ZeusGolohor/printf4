#include "main.h"

/**
  * _printf - Used to print to the standard output.
  * @format: first operand.
  * Return: int.
  */

int _printf(const char *format, ...)
{
	va_list list;

	va_start(list, format);
	(*get_snf_func(format))(list);
	va_end(list);
	return (0);
}
