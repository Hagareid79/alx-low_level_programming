#include "main.h"
/**
 **_memset - filles memory with constant byte
 *@s: is the first parameter,is a pointer
 *@b: is the second parameter,is a constant
 *@n: is the third parameter,byte is used
 *Return: the pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; n > 0; x++, n--)
{
s[x] = b;
}
return (s);
}
