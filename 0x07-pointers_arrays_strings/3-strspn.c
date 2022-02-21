#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes composing prefix
 * Return: bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int contador = 0;
	unsigned int anterior = 0;
	int i = 0;
	int j;

	while (*(s + i) != '\0') /*recorro s*/
	{
		j = 0;
		anterior = contador;
		while (*(accept + j) != '\0') /*recorro accept*/
		{
			if (*(s + i) == *(accept + j))
			/*si coincide letra de accept con letra de s sumar*/
			{
				contador++;
			}
			j++; /*sigo recorriendo accept hasta que no coincida*/
		}
		if (anterior == contador) /*si no coincidio ninguna da 0*/
		{
			break;
		}
		i++;
	}

	return (contador);
}
