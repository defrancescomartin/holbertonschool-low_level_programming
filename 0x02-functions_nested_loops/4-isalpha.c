#include "main.h"

/**
 * _islower - Prints 1 if the letter is lowercase
 * and if it is uppercase it prints 0
 * @letra: letra is an ASCII character
 * Description: Same as above.
 *
 * Return: Always 0 (Sucess)
 **/

int _islower(int letra)
{
	if (letra >= 'A' && letra <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
