#include "main.h"
/**
 *_atoi - converts string to an int
 *@s: strign to be converted
 *Return: int
 */
int _atoi(char *s)
{
	int i = 1;
	unsigned int u = 0;

	do {
		if (*s == '-')
			i *= -1;

		else if (*s >= '0' && *s <= '9')
			u = (u * 10) + (*s - '0');

		else if (u > 0)
			break;

	} while (*s++);

	return (u * i);
}
