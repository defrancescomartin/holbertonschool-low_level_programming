#include "main.h"

/**
 * _sqrt_recursion - return the sqrt of a num
 * @n: num
 * Return: srqt of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
/**
 * _sqrt - calculates srqt using newton method
 * @a: num to calculate its sqrt
 * @b: sqrt value
 * Return: a compared to b
 */

int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b < a)
		return (_sqrt(a, b + 1));
	return (-1);
}
