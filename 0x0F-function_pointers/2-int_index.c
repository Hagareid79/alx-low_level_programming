#include "function_pointers.h"
/**
 * int_index - seaarch
 * @array: is an array
 * @size: is the size of array
 * @cmp: is the copmare func
 * Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int x = 0;
if (array && size && cmp)
while (x < size)
{
if (cmp(array[x]))
return (x);
x++;
}
return (-1);
}
