#include "main.h"
#include <stdio.h>
/**
 **cap_string - is all words of string
 *@x: input of string
 *Return: string with capitalized words
 *
*/
char *cap_string(char *x)
{
int s = 0;
while (x[s])
{
while (!(x[s] >= 'a' && x[s] <= 'z'))
{
s++;
if (x[s - 1] == ' ' ||
x[s - 1] == '\t' ||
x[s - 1] == '\n' ||
x[s - 1] == ',' ||
x[s - 1] == ';' ||
x[s - 1] == '.' ||
x[s - 1] == '!' ||
x[s - 1] == '?' ||
x[s - 1] == '"' ||
x[s - 1] == '(' ||
x[s - 1] == '(' ||
x[s - 1] == ')' ||
x[s - 1] == '{' ||
x[s - 1] == '}' ||
s == 0)
x[s] -= 32;
}
s++;
}
return (x);
}
