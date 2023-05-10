#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - is a function to return string
 *@s: is a pointer of string
 *Return: 0 ,integer
*/
int _strlen_recursion(char *s)
{
int x = 0;
if (*s > '\0')
{
x += _strlen_recursion(s + 1) + 1;
}
return (x);
}
