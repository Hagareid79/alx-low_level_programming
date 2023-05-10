#include "main.h"
#include <stdio.h>
int squ(int n, int y);
/**
 * _sqrt_recursion - is a function to return squart of number
 *@n: is number
 *Return: the squar of number
*/
int _sqrt_recursion(int n)
{
return (squ(n, 1));
}
/**
 * squ - is a funtion to return squar
 * @n: is the number
 * @y: is the second parameter
 * Return: integer
*/
int squ(int n, int y)
{
int s = y * y;
if (s == n)
{
return (y);
}
else if (s < n)
{
return (squ(n, y + 1));
}
else
{
return (-1);
}
}
