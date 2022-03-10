#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes of string 2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int size = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		size++;

	array = malloc(sizeof(char) * (size + 1));

	if (array == NULL)
		return (NULL);

	size = 0;

	for (index = 0; s1[index]; index++)
		array[size++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		array[size++] = s2[index];

	array[size] = '\0';

	return (array);
}
