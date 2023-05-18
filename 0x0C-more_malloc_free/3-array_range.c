#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **array_range - allocates memory
 * @min: is a integer
 * @max: is an integer
 * Return: pointer of array
*/
int *array_range(int min, int max);
{
int *x, y = 0;
if (min > max)
return (NULL);
x = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (x == NULL)
return (NULL);
while (min <= max)
{
x[y] = min;
y++;
min++;
}
return (x);
}
