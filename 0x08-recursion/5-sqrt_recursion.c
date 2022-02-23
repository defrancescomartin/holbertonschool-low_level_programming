#include "main.h"

/**
 * _sqrt_recursion - return the sqrt of a num
 * @n: num
 * Return: srqt of n
 */
int _sqrt_recursion(int n) 
{
	int menor;
	int mayor;

	if (n < 0)
	{
		return (-1);
	}
	else if (n < 2)
	{
	return (n);
	}
	else
	{
	menor = _sqrt_recursion(n >> 2) << 1;
	mayor = menor + 1;
	}
	if (mayor * mayor > n)
	{
		return (menor);
	}
	else
	{
		return (mayor);
	}
}

