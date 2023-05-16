#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the memory
 * @grid: is gride
 * @height: is a hight
 * Return: null
*/
void free_grid(int **grid, int height)
{
int x;
if (grid == NULL || height == 0)
return;
for (x = 0; x < height; x++)
free(grid[x]);
free(grid);
}
