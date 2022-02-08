#include <stdio.h>

/*
 * main - print the 50 Fib numbers starting with 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
	long int suma;
	long int fst, snd;
	int contador;

	suma = 0;
	fst = 0;
	snd = 1;
	contador = 0;

	while (contador < 49)
	{
		suma = fst + snd;
		printf("%li, ", suma);
		fst = snd;
		snd = suma;

		contador++;
	}
	suma = fst + snd;
	printf("%li\n", suma);

	return (0);
}
