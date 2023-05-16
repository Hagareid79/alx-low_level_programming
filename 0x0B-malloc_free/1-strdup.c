#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer
 * @str: is a string
 * Return: pointer or 0
*/
char *_strdup(char *str)
{
int x, y;
char *z;
if (str == NULL)
return (NULL);
for (y = 0; str[y] != '\0'; y++)
z = malloc(y * sizeof(*str) + 1);
if (z == 0)
return (NULL);
else
{
for (x = 0; x < y; x++)
z[x] = str[x];
}
return (z);
}
