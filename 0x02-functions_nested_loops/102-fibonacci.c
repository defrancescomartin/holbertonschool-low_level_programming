#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long fst, snd, suma;
	int contador;

	suma = 0;
	fst = 0;
	snd = 1;
	contador = 0;

	while (contador < 49)
	{
		suma = fst + snd;
		printf("%lu, ", suma);
		fst = snd;
		snd = suma;
		contador++;
	}
	suma = fst + snd;
	printf("%lu\n", suma);

	return (0);
}
