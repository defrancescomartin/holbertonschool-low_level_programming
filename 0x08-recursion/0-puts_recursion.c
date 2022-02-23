#include "main.h"

/**
 * _puts_recursion - prints a string, followed by new line (using recursion)
 * @s: string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/*caso base para que corte*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar (*s); /*va imprimiendo*/

	_puts_recursion(s + 1); /*aca se llama recursivamente*/
				/*hasta llegar a '\0'*/
}
