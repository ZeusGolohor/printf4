#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int len;

	len = _printf("sc%", "test", 't');
	printf("%d\n", len);
	return (0);
}
