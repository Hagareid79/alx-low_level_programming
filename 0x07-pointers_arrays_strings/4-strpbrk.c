#include "main.h"
/**
 * *_strpbrk - search a string
 * @s: string
 * @accept: the second parameter, string
 * Return: pointer
*/
char *_strpbrk(char *s, char *accept)
{
int x, y;
char *z;
x = 0;
while (s[x] != '\0')
{
y = 0;
while (accept[y] != '\0')
{
if (accept[y] == s[x])
{
z = &s[x];
return (z);
}
y++;
}
x++;
}
return (0);
}
