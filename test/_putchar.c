#include <unistd.h>

/**
  * _putchar - write character c to the standard output
  * @c: The character to be printed.
  * Return: int.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
