#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: parameter checked
 * Return: lenth of a string
 */

int _strlen(char *s)
{
	int p;
	int lenght = 0;

	for (p = 0; s[p] != '\0'; p++)
		lenght++;
	return (lenght);
}
