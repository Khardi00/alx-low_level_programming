#include "main.h"

/**
 * puts2 - a function that print every other character of astring
 * @str: parameter checked
 * Return: 0
 */

void puts2(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		if (num % 2 == 0)
			_putchar(str[num]);
	}
	_putchar('\n');
}
