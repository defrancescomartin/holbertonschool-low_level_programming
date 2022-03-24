#include "main.h"

/**
 * clear_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int change = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	change <<= index;
	*n = *n & ~change;
	return (1);
}
