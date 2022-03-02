#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory, which 
 * contains a copy of the string given as a parameter
 * @str: string 
 * 
 * Return: pointer to duplicated array or null if it fails
 **/

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *array;

	if (str == NULL)
		return (NULL); /*si pasan un array tamaño 0 -> NULL*/
	while (str[i] != '\0')
	{
		i++;
	}
	array = malloc(i * sizeof(char));
	if (array == NULL) /*si falla mi array -> NULL*/
		return (NULL);
	while (j < i) /*empieza a duplicar el array de destino*/
	{
		array[j] = str[j];
		j++;
	}
	array[j] = '\0';

	return (array);
}
