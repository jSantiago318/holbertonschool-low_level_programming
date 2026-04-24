#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid of integers
 * @grid: pointer to the 2D array
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL || height <= 0)
		return;

	for (h = 0; h < height; h++)
		free(grid[h]);

	free(grid);
}
