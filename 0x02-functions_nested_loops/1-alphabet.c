#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Description: Same as above.
 *
 * Return: Always 0 (Sucess)
 **/

void print_alphabet(void)
{
	char letra = 'a';

	while (letra <= 'z')
	{
		_putchar(letra);
		letra++;
	}
	_putchar('\n');
}
