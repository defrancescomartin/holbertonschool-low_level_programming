#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string input value
 * Return: n
 */
char *leet(char *str)
{
	int i, j;
	char strL[] = "AaEeOoTtLl";
	char strN[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == strL[j])
			{
				str[i] = strN[j];
			}
		}
	}
	return (str);
}
