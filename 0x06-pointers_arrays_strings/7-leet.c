#include "main.h"
/**
 **leet - encode a string into 1337
 *@num: is an input
 *Return: the value of n
*/
char *leet(char *num)
{
int x, y;
char arr1[] = "aAeEoOtTlL";
char arr2[] = "4433007711";
for (x = 0; num[x] != '\0'; x++)
{
for (y = 0; y < 10; y++)
{
if (num[x] == arr1[y]
{
num[x] = arr2[y];
}
}
}
return (n);
}
