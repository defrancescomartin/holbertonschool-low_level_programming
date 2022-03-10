#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: destination mem area
 * @src: source mem area
 * @n: num of bytes to be filled
 * Return: pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
