#include "main.h"
/**
 *flip_bits - return number of bits that would need to be flipped to
 * @n: first number
 * @m: second number
 * Return: number of bits to flip to convert numbers
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xoo = n ^ m;
unsigned int x = 0;
while (xoo)
{
if (xoo & 1ul)
x++;
xoo = xoo >> 1;
}
return (x);
}
