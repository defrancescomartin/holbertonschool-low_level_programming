#include "main.h"

/**
 * rot13 - encodes a string into ROT13
 * @str: string input value
 * Return: char pointer
 */
char *rot13(char *str)
{
	int i, j;
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (str[i] == str1[j])
			{
				str[i] = str2[j];
				break;
			}
		}
	}

	return (str);
}
