#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create an array
 * @size: is the size of array
 * @c: is a char
 * Return: pointer of array
*/
char *create_array(unsigned int size, char c)
{
char *x = malloc(size);
if (size == 0 || x == 0)
return (Null);
while (size--)
{
x[size] = c;
}
return (x);
}
