#include "main.h"

/**
 * _strcpy - a function that copies the string pointed
 * @dest: parameter checked
 * @src: parameter checked
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int num;

	for (num = 0; src[num] != '\0'; num++)
		dest[num] = src[num];
	dest[num] = '\0';
	return (dest);
}
