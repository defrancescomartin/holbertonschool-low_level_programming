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

	for (linea = 1; linea <= size; linea++)
	{
		for (space = linea; space < size; space++)
		{
			printf(' ');
		}
		for (k = 1; k <= linea; k++)
		{
			printf('#');
		}
		printf('\n')
	}
}
