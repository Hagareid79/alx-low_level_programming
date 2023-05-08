#include "main.h"
/**
 * print_diagsums - discription
 * @a: two dimention array
 * @size: is the size of array
*/
void print_diagsums(int *a, int size)
{
int x, y = 0, z = 0;
for (x = 0; x < size; x++)
{
y += a[x];
z += a[size - x - 1];
a += size;
}
printf("%d, ", y);
printf("%d\n", z);
}
