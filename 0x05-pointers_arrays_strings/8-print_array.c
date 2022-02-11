#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array of integers
 * @n: number of items to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i, contador;

	i = 0;
	contador = 1;
	if (n < 0)
		n = 0;
	if (n > 0)
	{
		while (a[i] != '\0' && contador < n)
		{
			printf("%d, ", a[i]);
			i++;
			contador++;
		}
		printf("%d\n", a[i]);
	}
}
