#include "main.h"

/**
 * set_string - a function that set the value of a pointer to a char
 * @s: parameter checked
 * @to: parameter char
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
