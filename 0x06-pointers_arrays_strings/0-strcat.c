#include "main.h"
/**
 *_strcat -function that concate string
 *@dest: is the first parameter
 *@src: is the second parameter
 *Return: pointer is the result of concate
*/
char *_strcat(char *dest, char *src)
{
int x, y;
x = 0;
while (dest[x])
{
x++;
}
for (y = 0; src[y]; y++)
{
dest[x++] = src[y];
}
return (dest);
}
