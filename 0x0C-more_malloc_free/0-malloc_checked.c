#include "main.h"
/**
 * *malloc_checked - allocates memory
 * @b: is a integer
 * Return: pointer of array
*/
void *malloc_checked(unsigned int b)
{
int *x = malloc(b);
if (x == 0)
exit(98);
return (x);
}
