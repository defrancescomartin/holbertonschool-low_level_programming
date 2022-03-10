#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i, j, max;

	i = 0;
	j = 0;
	max = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		max = i / 2;
	}
	else
	{
		max = (i + 1) / 2;
	}
	for (j = max; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
