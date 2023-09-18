#include "main.h"

/**
 * swap_int - a funtion to swap two integers
 * @a: parameter checked
 * @b: parameter checked
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
