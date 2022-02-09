#include "main.h"

/**
 * print_triangle - prints a n base triangle
 * @size: length of side
 * Description: Same as above
 *
 * Return: void
 */

void print_triangle(int size)
{
	int linea, space, hashtag;

	if (size > 0)
	{
		while (linea < size)	
			for (linea = 1;	linea <= size; linea++)
			{
				for (space = linea; space < size; space++)
				{
					_putchar(' ');
				}
				for (hashtag = 1; hashtag <= linea; hashtag++)
				{
					_putchar('#');
				}
			_putchar('\n');
			linea++;
			}
	}
}
