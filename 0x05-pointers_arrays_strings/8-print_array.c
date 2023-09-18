#include "main.h"
#include <stdio.h>

/**
 * print_array - a funtion that prints n element of an array of integer
 * @a: parameter checked
 * @n: parameter checked
 * Return: 0
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);
		if (num < n - 1)
			printf(", ");
	}
	printf("\n");
}
