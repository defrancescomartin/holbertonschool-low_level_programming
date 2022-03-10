#include <stdio.h>

/**
 * main - print alphabet backwards
 *
 * Description: same as above
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}

	putchar(10);

	return (0);
}
