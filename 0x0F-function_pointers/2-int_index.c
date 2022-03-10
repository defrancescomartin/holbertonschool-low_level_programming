#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: size of the array // num of elements
 * @cmp : pointer to function to compare values
 * Return: index of the first elem for which cmp doesnt return 0
 * if no matches return -1
 * if size <= 0 return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
