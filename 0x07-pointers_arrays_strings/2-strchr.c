#include "main.h"
#define NULL (void *)0

/**
 * _strchr - locates a char in a string
 * @s: string that can contain c
 * @c: char to be found
 * Return: pointer to the first c ocurrence
 * or NULL if c is not foudn at s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
