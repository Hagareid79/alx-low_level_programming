#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concate two string
 * @s1: is a string
 * @s2: is a string
 * Return: pointer of string
*/
char *str_concat(char *s1, char *s2)
{
char *z;
unsigned int x = 0, y = 0, a = 0, b = 0;
while (s1 && s1[a])
a++;
while (s2 && s2[b])
b++;
z = malloc(sizeof(char) * (a + b + 1));
if (z == NULL)
return (NULL);
x = 0;
y = 0;
if (s1)
{
while (x < a)
{
z[x] = s1[x];
x++;
}
}
if (s2)
{
while (x < (a + b))
{
z[x] = s2[y];
x++;
y++;
}
}
z[x] = '\0';
return (z);
}
