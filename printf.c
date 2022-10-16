#include "main.h"

/**
  * _printf - Used to print to the standard output.
  * @format: first operand.
  * Return: int.
  */

int _printf(const char *format, ...)
{
	unsigned int i;

	i = 0;
	while (*(format + i) == '\0')
	{
		if (*(format + i) == '%')
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
		i++;
	}
	return (0);
}
