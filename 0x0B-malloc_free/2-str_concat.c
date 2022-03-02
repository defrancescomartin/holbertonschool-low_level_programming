#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to duplicated array or null if it fails
 **/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *array;

	if (str == NULL)
		return (NULL); /*si pasan un array tamaño 0 -> NULL*/
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
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
