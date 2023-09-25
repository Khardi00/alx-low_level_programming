#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonls
 * @a: parameter checked
 * @size: size parameter
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int num;
	int sum1 = 0;
	int sum2 = 0;

	for (num = 0; num < size; num++)
	{
		sum1 += a[num];
		a += size;
	}
	a -= size;
	for (num = 0; num < size; num++)
	{
		sum2 += a[num];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
