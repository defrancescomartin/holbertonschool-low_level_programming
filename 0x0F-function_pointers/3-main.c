#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - simple calculator
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *op(int, int);
	int a;
	int b;
	int tot;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = get_op_func (argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && b == 0) || (*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
