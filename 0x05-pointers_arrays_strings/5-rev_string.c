#include "main.h"
/**
 * rev_string - revers a string
 *@s: input string
 *Return: string in revers
*/
void rev_string(char *s)
{
int x = 0;
int y;
char z = s[0];
while (s[x] != '\0')
{
x++;
}
for (y = 0; y < x; y++)
{
x--;
z[y] = s[x];
s[x] = z;
}
}

