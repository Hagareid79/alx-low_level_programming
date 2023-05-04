#include "main.h"
/**
 **rot13 - encode a string
 *@c: input string
 *Return: encode of string
*/
char *rot13(char *c)
{
int x;
char arr1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char arr2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
char *i = c;
while (*c)
{
for (x = 0; x <= 52; x++)
{
if (*c == arr1[x])
{
*c = arr2[x];
break;
}
}
s++;
}
return (i);
}
