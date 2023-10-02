#include "main.h"

/**
 * _isupper - to check for upper character
 * @c: parameter checked
 * Return: 1 0r 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
