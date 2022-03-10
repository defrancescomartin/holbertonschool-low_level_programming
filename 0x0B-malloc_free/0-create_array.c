#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and
 * initializes it with a char c
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or null if it fails
 **/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL); /*si pasan un array tamaño 0 -> NULL*/
	array = malloc(size * sizeof(char));
	if (array == NULL) /*si falla mi array -> NULL*/
		return (NULL);
	/*
	* es lo mismo usar while y for
	* i = 0;
	* while (i < size)
	* {
	*	array[i] = c;
	*	i++;
	* }
	*/
	for (i = 0; i < size; i++)
	{
		array[i] = c; /*inicializa con el caracter c*/
	}
	return (array);
}
