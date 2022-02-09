#include "main.h"

/**
 * print_line - prints a n length _ line
 * @n: length of line
 * Description: Same as above
 *
 * Return: void
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
