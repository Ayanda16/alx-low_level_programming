#include"main.h"
#include<stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: 2D array of int to free
 * @height: height of grid
 *
 * Return: always void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
