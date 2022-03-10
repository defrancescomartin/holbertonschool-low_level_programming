#include "main.h"

/**
 * print_square - prints a n side size # square
 * @size: length of side
 * Description: Same as above
 *
 * Return: void
 */

void print_square(int size)
{
	int fil;
	int col;

	if (size > 0)
	{
		for (fil = 0; fil < size; fil++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
