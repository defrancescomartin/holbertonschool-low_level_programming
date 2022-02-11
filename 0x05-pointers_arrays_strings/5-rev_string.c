#include "main.h"

/**
 * rev_string - prints a string in reverse followed
 * by a new line
 * @s: string
 * Return: void
 */

void rev_strin(char *s)
{
	int i;
	int j = _strlen(s) - 1;
	char str[] = " ";

	for (i = 0 ; i < j ; i++)
	{
		str[0] = s[j];
		s[j] = s[i];
		s[i] = str[0];
		j--;
	}
}
