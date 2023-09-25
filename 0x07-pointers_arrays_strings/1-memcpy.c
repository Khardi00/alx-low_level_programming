#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: parameter destination
 * @src: parameter source
 * @n: parameter number
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		dest[k] = src[k];
		k++;
	}

	return (dest);
}
