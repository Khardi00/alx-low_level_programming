#include "main.h"

/**
 * _strncpy - a function that copies string
 * @dest: destination parameter
 * @src: source parameter
 * @n: parameter checked
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
