nclude <stdio.h>

/**
 * main - list all natural numbers multiples of 3 & 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, suma;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			suma += i;
		}

	}

	printf("%d\n", sum);

	return (0);
}
