#include "main.h"

/**
 * putchars - print recursively all cahrs from an int number.
 * @n: spects intger as an argument
 *
 * Return: Void
 */
void putchars(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		putchars(n / 10);
	}

	_putchar(n % 10 + '0');
}

/**
 * more_numbers - Prints 0-14 numbers 10 times
 * Description: Same as above
 *
 * Return: void
 */

void more_numbers(void)
{
	putchars(n)
}
