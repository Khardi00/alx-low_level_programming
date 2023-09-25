#include "main.h"

/**
 * _strchr - a function that locate a character in a string
 * @s: parameter checked
 * @c: parameter checked
 * Return: a pointer or null
 */

char *_strchr(char *s, char c)
{
	int num;

	for (num = 0; num >= '\0'; num++)
	{
		if (s[num] == c)
			return (s + num);
	}
	return ('\0');
}
