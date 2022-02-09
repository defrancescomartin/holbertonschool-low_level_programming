#include "main.h"

/**
 * print_numbers - Prints 0-9 numbers
 * Description: Same as above
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
