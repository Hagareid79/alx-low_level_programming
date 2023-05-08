#include "main.h"
/**
 * *_strchr - file memory
 * @s: the first parameter
 * @c: the seconde parameter
 * Return: pointer to p
*/
char *_strchr(char *s, char c)
{
int x;
for (x = 0; s[x] >= '0'; x++)
{
if (s[x] == c)
{
return (s + x);
}
}
return ('\0');
}
