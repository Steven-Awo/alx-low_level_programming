#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A program that frees a 2 dim grid prev created
 * @grid: The grid line of the dimension
 * @height: The height of the dimension
 * Return: void (successful)
 */

void free_grid(int **grid, int height)

{
	int x;

	for (x = 0; x < height; x++)
	{
	free(grid[x]);
	}
	free(grid);
}
