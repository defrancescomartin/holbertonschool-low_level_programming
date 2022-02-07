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
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
