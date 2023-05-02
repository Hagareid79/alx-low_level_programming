#include "main.h"
/**
 *print_rev -prints the revers of string
 *@s: is the pointer of string
 *Return: no anything
*/
void print_rev(char *s)
{
int a = 0;
while (s[a])
{
a++;
}
while (a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
