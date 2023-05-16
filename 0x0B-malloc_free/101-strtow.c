#include "main.h"
#include <stdlib.h>
/**
 * **strtow - array of string
 * @str: is a parameter
 * Return: pointer of array
*/
char **strtow(char *str)
{
char **x, *y;
int a, b = 0, l = 0, w, c = 0, s, e;
while (*(str + l))
l++;
w = count_word(str);
if (w == 0)
return (NULL);
x = (char **) malloc(sizeof(char *) * (w + 1));
if (x == NULL)
return (NULL);
for (a = 0; a <= l; a++)
{
if (str[a] == ' ' || str[a] == '\0')
{
if (c)
{
e = a;
y = (char *) malloc(sizeof(char) * (c + 1));
if (y == NULL)
return (NULL);
while (s < e)
*y++ = str[s++];
*y = '\0';
x[b] = y - c;
b++;
c = 0;
}
}
else if (c++ == 0)
s = a;
}
x[b] = NULL;
return (x);
}
