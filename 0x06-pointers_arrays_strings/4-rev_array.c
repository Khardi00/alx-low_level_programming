#include "main.h"

/**
 * reverse_array - a function that reverse the content of an array
 * @a: parameter checked
 * @n: parameter checked
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int k;
	int m;

	for (k = 0; k < n / 2; k++)
	{
		m = a[k];
		a[k] = a[n - 1 - k];
		a[n - 1 - k] = m;
	}
}
