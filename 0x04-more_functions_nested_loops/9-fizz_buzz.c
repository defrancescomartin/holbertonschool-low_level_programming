#include "main.h"
#include <stdio.h>

/**
 * main - prints nums from 0 to 100
 * it prints fizz for 3 multiples
 * it prints buzz for 5 multiples
 * it prints fizzbuzz if the num has 3 and 5
 * Description: Same as above
 *
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			if (i == 100)
				printf("Buzz")
			else
				printf("Buzz ")
		else if (i % 3 == 0)
			printf("Fizz")
		else
			printf("%d", i)
	}
	printf("\n")
}
