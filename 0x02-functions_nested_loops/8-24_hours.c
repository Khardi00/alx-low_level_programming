#include "main.h"

/**
 * jack_bauer - to print every min of the day
 * Return: 0
 */

void jack_bauer(void)
{
	int m, n;


	for (m = 0; m < 24; m++)
	{
		for (n = 0; n < 6; n++)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar(':');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar('\n');
		}
	}
}
