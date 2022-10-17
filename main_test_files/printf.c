#include "main.h"

/**
  * _printf - Used to print to the standard output.
  * @format: first operand.
  * Return: int.
  */

int _printf(const char *format, ...)
{
	unsigned int i, x, y, len;
	int tot_len;
	char *str;
	va_list list;

	s_f sf[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
		{NULL, NULL}
	};
	va_start(list, format);
	if (format != NULL)
	{
		y = 0;
		while (*(format + y) != '\0')
		{
			y++;
		}
		len = y;
		str = malloc(sizeof(char) * (len + 1));
		str = _strcpy(str, format);
		i = 0;
		while (i < len)
		{
			x = 0;
			while (sf[x].symbol != NULL)
			{
				if (*(sf[x].symbol) == *(str + i))
				{
					tot_len = (*(sf[x].function))(list);
				}
				x++;
			}
			i++;
		}
		va_end(list);
		free(str);
	}
	return (tot_len);
}
