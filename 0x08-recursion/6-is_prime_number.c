#include "main.h"
#include <stdio.h>
int pri(int n, int x);
/**
 *is_prime_number - is a function to print a prime number
 *@n: is a number
 *Return: an integer
*/
int is_prime_number(int n)
{
return (pri(n, 1));
}
/**
 * pri - is function
 * @n: is a number
 * @x: is a number
 * Return: integer
*/
int pri(int n, int x)
{
if (n % x == 0 && x > 1)
{
return (0);
}
else if (n <= 1)
{
return (0);
}
else if ((n / x) < x)
{
return (1);
}
else
{
return (pri(n, x + 1));
}
}
