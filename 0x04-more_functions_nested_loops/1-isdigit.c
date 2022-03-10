#include "main.h"

/**
 * _isdigit - Prints 1 if its a digit
 * and if not print 0
 * @digit: digit is an ASCII character
 * Description: Same as above
 *
 * Return: 1 if digit, 0 if not
 */

int _isdigit(int digit)
{
	if (digit >= '0' && digit <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
