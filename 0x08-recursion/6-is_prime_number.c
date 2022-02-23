#include "main.h"

/**
 * is_prime_number - checks if a num is prime
 * @n: num
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (_prime(n, n - 1));
}
/**
 * _prime - see if n is prime
 * @n: number to test
 * @m: iterator
 * Return: 1 if prime 0 if not
 */
int _prime(int n, int m)
{
	if (n % m == 0 && m != 1)
	return (0);
	if (n % m == 0 && m == 1)
	return (1);
	return (_prime(n, m - 1));
}
