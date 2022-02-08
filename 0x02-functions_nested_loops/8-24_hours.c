#include "main.h"

/**
 * jack_bauer - Prints last day of jack
 *
 * Description: Same as above
 *
 * Return: whole hours and minutes of a day
 **/
void jack_bauer(void);
{
	int dHora, uHora, dMin, uMin, hMax;
	
	while (dHora < 3)
	{
		if (dHora == '2')
		{
			hMax = '4';
		}
		uHora = '0';
		while (uHora < hMax)
		{
			dMin = '0';
			while (dMin < '6')
			{
				uMin = '0';
				while (uMin < 58)
				{
					_putchar(dHora):
					_putchar(uHora):
					_putchar(:):
					_putchar(dMin):
					_putchar(uMin):
					_putchar('\n'):
					uMin++:
				}
				uMin = '0';
				dMin++;
			}
			dMin = '0';
			uHora++;
		}
		uHora = '0';
		dHora++;
	}
}
