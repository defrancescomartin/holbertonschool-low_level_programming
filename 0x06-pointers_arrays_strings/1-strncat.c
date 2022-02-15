#include "main.h"

/*
 * _strncat - concatenates two strings
 * @dest: destination char
 * @src: source char
 * @n: number of bytes to copy
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dLen = 0;
	int sLen = 0;

	while (dest[dLen] != '\0')
	{
		dLen++;
	}

	while (sLen < n && src[sLen] != '\0')
	{
		dest[dLen] = src[sLen];
		dLen++;
		sLen++;
	}

	dest[dLen] = '\0';
	return (dest);
}
