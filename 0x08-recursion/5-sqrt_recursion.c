#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - is a function to return squart of number
 *@n: is number
 *Return: the squar of number
*/
int _sqrt_recursion(int n)
{
return (squ(x, 1));
}
/**
 * squ - is a funtion to return squar
 * @x: is the number
 * @y: is the second parameter
 * Return: integer
*/
int squ(int x, int y);
int squ(int x, int y)
{
if (y * y == x)
{
return (y);
}
else if (y * y < x)
{
return (squ(x, y + 1));
}
else
{
return (-1);
}
}
