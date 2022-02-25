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

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]); 
	}
	printf("%d\n", sum);

	return (0);
}
