#include "main.h"

/**
 * print_diagonal - prints a n length \ diagonal line
 * @n: length of line
 * Description: Same as above
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int line = 0;
	int space;

	if (n > 0)
	{
		while (line < n)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
