#include "main.h"
#include <stdlib.h>z
/**
 **array_range - allocates memory
 * @min: is a integer
 * @max: is an integer
 * Return: pointer of array
*/
int *array_range(int min, int max)
{
int x, y;
int *z;
if (min > max)
return (NULL);
x = max - min + 1;
z = malloc(sizeof(int) * x);
if (!z)
return (NULL);
for (y = 0; y < x; y++)
z[y] = min++;
return (z);
}
