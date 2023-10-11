#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: parameter
 * Return: a pointer to new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);
	else
		return (result);
}
