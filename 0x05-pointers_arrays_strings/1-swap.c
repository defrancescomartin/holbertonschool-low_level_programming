#include "main.h"

/**
 * swap_int - swap the values of 2 ints
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
