#include "main.h"
/**
 *print_sign -print + is greater than 0
 *@n: takes integer type input from finction
 *Return: 1 if +,0 if 0,and -1 if - (Sccess)
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
