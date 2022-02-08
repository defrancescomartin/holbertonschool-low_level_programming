#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98 from
 * @i: first int
 *
 * Description: prints all natural number from i to 98
 *
 * Return: void
 */
void print_to_98(int i)
{
	if (i < 98)
	{
		while (i < 98)
		{
			printf("%d, ", i);
			i++;
		}
	}
	else if (i > 98)
	{
		while (i > 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
	printf("98\n");
}
