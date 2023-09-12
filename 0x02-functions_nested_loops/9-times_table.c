#include "main.h"
#include <stdio.h>

/**
 * times_table - a program that writes 9 times table
 * Return: 0
 */

void times_table(void)
{
	int m, n, R;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			R = m * n;
			if (n == 0)
				printf("%d, ", R);
			else
			{
				printf("%2d", R);
				if (n != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
