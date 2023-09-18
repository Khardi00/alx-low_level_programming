#include "main.h"

/**
 * puts_half - a function that prints the second half of astring
 * @str: parameter checked
 * Return: 0
 */

void puts_half(char *str)
{
	int num, print;
	int lenght = 0;

	for (num = 0; str[num] != '\0'; num++)
		lenght++;
	print = (lenght - 1) / 2;
		for (num = print + 1; str[num] != '\0'; num++)
			_putchar(str[num]);
	_putchar('\n');
}
