#include "main.h"
#include <stdio.h>
/**
 *isLower - ascii is lower
 *@c: character
 *Return: 1 if ture, 0 if false
*/
int isLower(char c)
{
return (c >= 97 && c <= 122);
}
/**
 *isDelimiter - ascii is delimeter
 *@c: is character
 *Return: 1 if true, 0 if false
*/
int isDelimiter(char c)
{
int i;
char d[] = " \t\n,.!?\"(){}";
for (i = 0; i < 12; i++)
if (c == d[i])
return (1);
else
return (0);
}
/**
 **cap_string - is all words of string
 *@x: input of string
 *Return: string with capitalized words
 *
*/
char *cap_string(char *x)
{
char *i = x;
int k = 1;
while (*x)
{
if (isDelimiter(*x))
k = 1;
else if (isLower(*x) && k)
{
*s -= 32;
k = 0;
}
else
k = 0;
x++;
}
return (i);
}
