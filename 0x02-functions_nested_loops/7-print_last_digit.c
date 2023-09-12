#include "main.h"

/**
 * print_last_digit - to print last digit
 * @a: parameter checked
 * Return: m
 */

int print_last_digit(int a)
{
	int m;

	m = a % 10;
	if (a < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
