#include "main.h"

/**
  * print_char - Used to print a character.
  * @list: first operand.
  * Return: int.
  */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	_putchar('\n');
	return (1);
}
