#include "main.h"
/**
 *print_last_digit - print last digit of number
 *@n: takes number
 *Return: lastdigit (Success)
*/
int print_last_digit(int n)
{
int i;
if (n < 0)
i = -1 * (n % 10);
else
i = n % 10;
_putchar(i + '0');
return (i);
}
