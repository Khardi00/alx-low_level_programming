#include "variadic_functions.h"

/**
 * print_numbers - a function that print numbers as parameter
 * @separator: a parameter that seperates numbers
 * @n: number of parameter
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int k;
	va_list list;

	va_start(list, n);
	for (k = 0; k < n; k++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && k == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
