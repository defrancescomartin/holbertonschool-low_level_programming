#include "main.h"

/**
 * print_line - prints a n length _ line
 * Description: Same as above
 *
 * Return: void
 */

void print_line(void)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
