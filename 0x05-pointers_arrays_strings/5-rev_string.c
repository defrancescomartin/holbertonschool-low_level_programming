#include "main.h"

/**
 * rev_string - prints a string in reverse followed
 * by a new line
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
