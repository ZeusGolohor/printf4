#include "main.h"

/**
  * _printf - Used to print to the standard output.
  * @format: first operand.
  * Return: int.
  */

int _printf(const char *format, ...)
{
	unsigned int i, len;
	va_list list;

	va_start(list, format);
	if (format != NULL)
	{
		len = strlen(format);
		i = 0;
		while (i < len)
		{
			sw(format, i, len, list);
			i++;
		}
	}
	printf("\n");
	va_end(list);
	return (len);
}

/**
  * switch - Function for a switch statement.
  * @format: 1st operand.
  * @i: 2nd operand.
  * @len: 3rd operand.
  * @list: 4th operand.
  * Return: void.
  */

void sw(const char *format, unsigned int i,
		unsigned int len, va_list list)
{
	char *string;
	unsigned int x;

	switch (*(format + i))
	{
		case 's':
			string = va_arg(list, char *);
			x = 0;
			while (*(string + x) != '\0')
			{
				_putchar(*(string + x));
				x++;
			}
			break;
		case 'c':
			_putchar(va_arg(list, int));
			break;
		case '%':
			putchar('%');
			break;

	}
	if ((i + 1) != len)
	{
		_putchar(',');
		_putchar(' ');
	}
}
