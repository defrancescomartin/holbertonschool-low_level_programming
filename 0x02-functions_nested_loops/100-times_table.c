#include "main.h"

/**
 * print_times_table - prints the times table
 * @i: integer for which the times table is printed
 *
 * Description: Same as above
 *
 * Return: void
 */

void print_times_table(int i)
{
	int fil, col, prod;

	if (i >= 0 && i < 15)
	{
		for (fil = 0; fil <= i; fil++)
		{
			for (col = 0; col <= i; col++)
			{
				prod = fil * col;

				if (col == 0)
					_putchar('0');
				else if (prod < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod % 10 + '0');
				}
				else if (prod >= 10 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (prod > 99 && prod < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(product / 100 + '0');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
