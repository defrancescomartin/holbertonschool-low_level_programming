#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_c - prints a
 * @c: char to print
 *
 * Return: void
 */

void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - prints an int
 * @i: int to print
 *
 * Return: void
 */

void print_i(va_list i)
{
	printf("%d", va_arg(i, int);
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: void
 */

void print_f(va_list f)
{
	printf("%d", va_arg(f, double));
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */

void print_s(va_list s)
{
	char *str = va_arg(str, char*);
	if (str == NULL)
		printf("%s", "(nil)");
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};

	va_list

	va_start

	va_end
	printf("\n");
