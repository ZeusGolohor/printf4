#include <unistd.h>

/**
  * _write_char - write character c to the standard output
  * @c: The character to be printed.
  * Return: int.
  */

int _write_char(char c)
{
	return (write(1, &c, 1));
}
