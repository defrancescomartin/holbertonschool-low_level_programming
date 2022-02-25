#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - adds positive numbers
 *@argc: argument count
 *@argv: array of pointers to argument strings
 *Return: always 0
**/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *c;

	if(argc < 2)
	{
		printf("Error\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (c = argv[argc]; *c; c++)
			if (*c > '9'|| *c < '0')
				printf("Error\n");
				return (1);
		sum += atoi(argv[i]); 
	}
	printf("%d\n", sum);

	return (0);
}
