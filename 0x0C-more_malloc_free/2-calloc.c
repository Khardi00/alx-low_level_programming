#include "main.h"

/**
 * _calloc - a function that allocates memory to an array
 * @nmemb:no of member
 * @size: size of memory
 * Return: null if nmemb or size = 0, or malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = calloc(nmemb, size);
	if (result == NULL)
		return (NULL);
	else
		return (result);
}
