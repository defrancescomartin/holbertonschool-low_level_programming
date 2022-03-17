#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all the parameters
 * @n: numbers
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum;

	va_start(nums, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}
