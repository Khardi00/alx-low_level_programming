#include "main.h"

/**
 * _puts_recursion - a function that prints string followed by a new line
 * @s: parameter checked
 * Return: 0
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	while (*s == '\0')
	{
		_putchar('\n');
	}
}
