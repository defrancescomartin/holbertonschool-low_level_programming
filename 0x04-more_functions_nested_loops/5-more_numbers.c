#include "main.h"

/**
 * more_numbers - Prints 0-14 numbers 10 times
 * Description: Same as above
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j ++)
	{
		for (i = 0; i <= 14; i ++)
		{
			if (i > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n')
	}
}
