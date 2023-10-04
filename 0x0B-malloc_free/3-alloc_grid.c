#include "main.h"

/**
 * alloc_grid - a function that return a pointer to a 2 diimension
 * @width: parameter for width
 * @height: parameter for height
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **result;
	int k;
	int l;

	if (width <= 0 || height <= 0)
		return (NULL);
	result = malloc(sizeof(int *) * height);
	if (result == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		result[k] = malloc(sizeof(int) * width);
		if (result[k] == NULL)
		{
			free(result);
			for (l = 0; l <= height; l++)
				free(result[l]);
			return (NULL);
		}
		for (l = 0; l < width; l++)
			result[k][l] = 0;
	}
	return (result);
}
