#include "main.h"

/**
 * print_sign - Prints 1 and + if the num is positive
 * -1 and - if it is negative and 0 and 0 if it is zero
 * @i: i is an integer
 * Description: Same as above.
 *
 * Return: 1 (if positive), 0 (if zero), -1 (if negative)
 **/

int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
