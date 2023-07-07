#include "main.h"
/**
 * print_binary - prints a number as binary string
 * @n: the number to print
 * Return: void
*/
void print_binary(unsigned long int n)
{
int b = sizeof(n) * 8, x = 0;

while (b)
{
if (n & 1L << --b)
{
_putchar('1');
x++;
}
else if (x)
_putchar ('0');
}
if (!x)
_putchar('0');
}
