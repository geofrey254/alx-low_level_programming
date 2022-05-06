#include "main.h"

/**
 * free_grid -  starting point prototype
 * @grid: int var initialization
 * @height: int height declaration
 * Return: always pointer
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
