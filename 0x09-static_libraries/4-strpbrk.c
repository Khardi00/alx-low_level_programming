#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of byte
 * @s: parameter checked
 * @accept: parameter checked
 * Return: accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (*s == accept[num])
				return (s);
		}
		s++;
	}
	return ('\0');
}
