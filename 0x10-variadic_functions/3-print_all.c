#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_ - prints a 
 * @: 
 *
 * Return: void
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
