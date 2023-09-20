#include "main.h"
#include <string.h>

/**
 * _strncat - a function that concatinate two strings
 * @dest: destination parameter
 * @src: destination parameter
 * @n: parameter checked
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = strlen(dest);
	int k;

	for (k = 0; k < n && *src != '\0'; k++)
	{
		*src = dest[len1 + k];
		src++;
	}
	dest[len1 + k] = '\0';
	return (dest);
}
