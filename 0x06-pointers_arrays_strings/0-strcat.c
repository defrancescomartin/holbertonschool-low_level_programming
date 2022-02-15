#include "main.h"

/*
 * _strcat - concatenates two strings
 * @dest: destination char
 * @src: source char
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int dLen = 0;
	int sLen = 0;

	while (dest[dLen] != '\0')
	{
		dLen++;
	}

	while (src[sLen] != '\0')
	{
		dest[dLen] = src[sLen];
		dLen++;
		sLen++;
	}

	dest[dLen] = '\0';
	return (dest);
}
