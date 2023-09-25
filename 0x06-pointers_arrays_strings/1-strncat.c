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
	int i, j;

	i = 0;
	j - 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
