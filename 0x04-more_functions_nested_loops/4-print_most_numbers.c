#include "main.h"

/**
 * print_most_numbers - Prints 0-9 numbers except 2 & 4
 * Description: Same as above
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		_putchar(i);
	}
	_putchar('\n');
}
