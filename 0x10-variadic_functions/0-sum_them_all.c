#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all integers
 * @n: parameter
 * Return: sum of the number
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int k;
	int sum = 0;

	va_list list;

	va_start(list, n);
	for (k = 0; k < n; k++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
