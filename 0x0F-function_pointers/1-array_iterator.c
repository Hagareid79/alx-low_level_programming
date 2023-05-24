#include "function_pointers.h"
/**
 * array_iterator - mapsman array
 * @array: an array
 * @size: the size of array
 * @action: function pointer
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *E = array + size - 1;
if (array && size && action)
while (array <= E)
action(*array++);
}
