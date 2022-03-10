#include "main.h"

/**
 * jack_bauer - Prints last day of jack
 *
 * Description: Same as above
 *
 * Return: whole hours and minutes of a day
 **/
void jack_bauer(void)
{
	int hor;
	int min;
	int i;

	for (hor = 00; hor <= 23; hor++)
	{
		for (min = 00; min <= 59; min++)
		{
			i = hor / 10;
			_putchar (i + '0');
			i = hor % 10;
			_putchar (i + '0');
			_putchar (':');
			i = min / 10;
			_putchar(i + '0');
			i = min % 10;
			_putchar(i + '0');
			_putchar('\n');
		}
	}
}

