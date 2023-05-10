#include "main.h"
#include <stdio.h>
/**
 *_pow_recursion - is function to return power
 *@x: is the first parameter
 *@y: is the second parameter
 *Return: integer
*/
int _pow_recursion(int x, int y)
{
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
else if (y == 0)
{
return (1);
}
else if (y == 1)
{
return (x);
}
else
{
return (-1);
}
}
