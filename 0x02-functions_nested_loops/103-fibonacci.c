#include <stdio.h>

/**
 * main - print the sum of even fib nums up to 4M
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long total, sum, fst, snd;

	total = 0;
	sum = 0;
	fst = 0;
	snd = 1;

	while (sum < 4000000)
	{
		sum = fst + snd;
		if (sum % 2 == 0)
		{
			total += sum;
		}
		fst = snd;
		snd = sum;
	}
	printf (%lu\n, total);

	return (0);
}
