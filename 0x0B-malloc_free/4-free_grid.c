#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid created by your alloc_grid function.
 *
 * @grid: pointer to the array
 * @height: number of files of the array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	height--;
	for (; height > 0; height--)
		free(grid[height]);


}
