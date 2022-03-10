#include "main.h"

/**
 * factorial - returns the factorial of a given num (using recursion)
 * @n: num
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	/*si es negativo, error*/
	if (n < 0)
		return (-1);
	if (n <= 1) /*si llega a 1, corta. caso base (1! = 1), (0! = 1)*/
		return (1);
	return (n * factorial(n - 1));
}
