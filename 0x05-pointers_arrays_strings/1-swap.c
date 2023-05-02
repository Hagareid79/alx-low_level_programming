#include "main.h"
/**
 * swap_int - swap the value of two integers by two parameters
 *@a: the first paramiter 1
 *@b: the second parameter 2
 * Return: Nothing
*/
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
