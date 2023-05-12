#include "main.h"
/**
 *_strncat -that function is concate two string
 *@dest: is the first parameter
 *@src: is the second parameter
 *@n: is the third parameter, number of bytes from @src
 *Return: @dest
*/
char *_strncat(char *dest, char *src, int n)
{
int x, y;
x = 0;
while (dest[x] != '\0')
{
x++;
}
y = 0;
while (y < n && src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
