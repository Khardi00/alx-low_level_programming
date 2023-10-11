#include "main.h"

/**
 * array_range - a function that createsan array integer
 * @min: minimun number
 * @max: maximum number
 * Return: pointer to the new created array
 */

int *array_range(int min, int max)
{
	int k;
	int size;
	int *result;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	for (k = 0; min <= max; k++)
		result[k] = min++;
	return (result);
}
