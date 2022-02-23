#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse (using recursion)
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/*caso base para que corte*/
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1); /*llega al ultimo y empieza*/
		_putchar(*s); /*imprime del ult al prim*/
	}
}
