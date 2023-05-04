#include "main.h"
/**
 *reverse_array - reverse array
 *@a: is an array
 * @n: is a number of elements
 *Return: revers
*/
void reverse_array(int *a, int n)
{
int x, y;
for (x = 0; x < n; x++)
{
n--;
y = a[x];
a[x] = a[n];
a[n] = y;
}
}
