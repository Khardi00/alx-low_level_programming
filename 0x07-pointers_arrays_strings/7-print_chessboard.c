#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: parameter checked
 * Return: o
 */

void print_chessboard(char (*a)[8])
{
	int k, m;

	for (k = 0; k < 8; k++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[k][m]);
		}
		_putchar('\n');
	}
}
