#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - The sum of the 2 diagonals of a square matrix of integers.
 * @a: Second array of chars.
 * @size: The size*size of square matrix.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, diagonalslash = 0, diagantislash = 0;

	for (i = 0; i < size; i++)
	{
		diagonalslash += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
        {
		diagantislash += a[i];
		a -= size;
        }
	printf("%d, %d\n", diagonalslash, diagantislash);
}
