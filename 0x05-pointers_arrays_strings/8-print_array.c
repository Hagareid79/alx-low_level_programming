#include "main.h"
/**
 *print_array -print the elements of array
 *@a: is an input parameter string
 *@n: is the second parameter
 *Return: no anything
*/
void print_array(int *a, int n)
{
int s;
for (s = 0; s < n; s++)
{
if (s != (n - 1))
printf("%d, ", a[s]);
else
printf("%d", a[s]);
}
printf("\n");
}
