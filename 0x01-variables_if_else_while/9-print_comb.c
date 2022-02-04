#include <stdio.h>

/**
 * main - print numbers from 0 to 9
 *
 * Description: with , and blankspace
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i,' ');
		i++;
	}

	putchar(10);

	return (0);
}
