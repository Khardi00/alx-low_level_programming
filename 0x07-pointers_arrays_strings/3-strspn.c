#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: parameter check
 * @accept: parameter checked
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int num;

	while (*s)
	{
		for (num = 0; accept[num]; num++)
		{
			if (*s == accept[num])
			{
				byte++;
				break;
			}
			else if (accept[num + 1] == '\0')
				return (byte);
		}
		s++;
	}
	return (byte);
}
