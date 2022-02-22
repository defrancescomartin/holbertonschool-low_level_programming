#include "main.h"
#define NULL (void *)0

/**
 * _strstr - locates a substring
 * @haystack: long string that can have needle
 * @needle: substring to be searched
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found
 */

char  *_strstr(char *haystack, char *needle)
{
	char *pajar, *aguja;

	while (*haystack != '\0')
	{
		pajar = haystack;
		aguja = needle;

		while (*haystack != '\0' && *aguja != '\0' && *haystack == *aguja)
		{
			haystack++;
			aguja++;
		}
		if (*aguja == '\0')
			return (pajar);
		haystack = pajar + 1;
	}
	return (NULL);
}
