#include "main.h"

/**
 * _isalpha - write a function to check for alphabet
 * @c: parameter checked
 * Return: 1 if c is lower or upper otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
