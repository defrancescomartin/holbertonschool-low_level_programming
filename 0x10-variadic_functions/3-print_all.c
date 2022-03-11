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
	int i, j;
	char *separator = "";

	va_list valist;

	va_struct letter[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
<<<<<<< HEAD

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (letter[j].print != '\0')
		{
			if (letter[j].print) == format[i])
			{
				printf("%s", separator);
				letter[j].p(valist);
				separator = ", ";
=======
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].t != NULL)
		{
			if (format [i] == *(p[j].t))
			{
				printf("%s", separator);
				p[j].f(valist);
				separator = ", ";
				break;
>>>>>>> 0e5a723a7dddc12e467d63ffbd9027c876c0334d
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
