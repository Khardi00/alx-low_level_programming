#include "main.h"

/**
 * _print_rev_recursion - a function that prints string in reverse
 * @s: parameter checked
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
