#include "main.h"
#include <stdlib.h>
/**
 * _strdup - return a pointer
 * @str: is a string
 * Return: pointer or 0
*/
char *_strdup(char *str)
{
unsigned int x, y;
char *z;
x = 0, y = 0;
if (str == NULL)
return (NULL);
while (str[y])
y++;
z = malloc(sizeof(char) * (y + 1));
if (z == NULL)
return (NULL);
while ((z[x] = str[x]) != '\0')
x++;
return (z);
}
