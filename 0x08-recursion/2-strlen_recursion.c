#include "main.h"

/**
 * _strlen_recursion - returns the length of a string (using recursion)
 * @s: string
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	/*caso base para que corte*/
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
		/*cuento 1, la sumo y paso a la siguiente hasta '\0'*/
	return (0);
}
