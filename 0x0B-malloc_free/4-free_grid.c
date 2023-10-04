#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: parameter
 * @height: parameter
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
