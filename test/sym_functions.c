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

/**
  * print_string - Used to print a string.
  * @list: frist operand.
  * Return: int.
  */

int print_string(va_list list)
{
	char *s;
	int i;

	s = va_arg(list, char *);
	i = 0;
	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
	return ((i - 1));
}

/**
  * print_perc - Used to print a percentage sign to the stdout
  * @list: first operand.
  * Return: int.
  */

int print_perc(va_list list)
{
	_putchar(va_arg(list, int));
	_putchar('\n');
	return (1);
}
