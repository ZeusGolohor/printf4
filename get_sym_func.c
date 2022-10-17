#include "main.h"

/**
  * get_snf_func - Used to select the right function
  * to perform a task.
  * @s: first operand.
  * Return: int.
  */

int (*get_snf_func(const char *s))(va_list)
{
	unsigned int i;

	s_f list[] = {
		{"c", print_char},
		{NULL, NULL}
	};
	i = 0;
	while (list[i].symbol != NULL && *(list[i].symbol) == *(s + i))
	{
		return (list[i].function);
		i++;
	}
	return (0);
}
