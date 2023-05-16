#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - create two dim arr
 * @width: is a row
 * @height: is a column
 * Return: two dimention arr
*/
int **alloc_grid(int width, int height)
{
int **arr;
int x, y;
arr = malloc(sizeof(*arr) * height);
if (width <= 0 || hight <= 0 || arr == 0)
{
return (NULL);
}
else
{
for (x = 0; x < height; x++)
{
arr[x] = malloc(sizeof(**arr) * width);
if (arr[x] == 0)
{
while (x--)
free(arr[x]);
free(arr);
return (NULL);
}
for (y = 0; y < width; y++)
arr[x][y] = 0;
}
}
return (arr);
}
