#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numlist;
	unsigned int i;

	va_start(numlist, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(numlist, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
		i++;
	}

	va_end(numlist);

	printf("\n");
}
