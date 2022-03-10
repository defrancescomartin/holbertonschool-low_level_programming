#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int fil, col, multi, decena, unidad;

	for (fil = 0; fil <= 9; fil++)
	{
		for (col = 0; col <= 9; col++)
		{
			multi = fil * col;
			decena = multi / 10;
			unidad = multi % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (multi < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(unidad + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(decena + '0');
				_putchar(unidad + '0');
			}
		}
		_putchar('\n');
	}
}
