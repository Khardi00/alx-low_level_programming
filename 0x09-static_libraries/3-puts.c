#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: parameter checked
 * Return: always 0
 */

void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
		_putchar(str[num]);
	_putchar('\n');
}
