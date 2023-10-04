#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - a function that crreates an array of character
 * @size: size
 * @c: parameter
 * Return: a pointer or null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		a[k] = c;
	return (a);
}
