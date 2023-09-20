#include "main.h"

/**
 * _strcat - afunction that concatinate two strings
 * @dest: destination parameter
 * @src: source parameter checked
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0;
	int len2 = 0;
	int k;

	for (k = 0; dest[k] != '\0'; k++)
		len1++;
	for (k = 0; src[k] != '\0'; k++)
		len2++;
	for (k = 0; k <= len2; k++)
		src[k] = dest[len1 + k];
	return (dest);
}
