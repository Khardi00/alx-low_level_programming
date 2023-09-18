#include "main.h"

/**
 * print_rev - print numbers in reverse format
 * @s: parameter checked
 * Return: void
 */

void print_rev(char *s)
{
	int num;
	int lenght = 0;

	for (num = 0; s[num] != '\0'; num++)
		lenght++;
	for (num = lenght - 1; num >= 0; num--)
		_putchar(s[num]);
	_putchar('\n');
}
