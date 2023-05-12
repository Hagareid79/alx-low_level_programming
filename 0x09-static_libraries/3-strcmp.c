#include "main.h"
/**
 *_strcmp -compare two string
 *@s1: first parameter, is first string
 *@s2: second parameter,is second string
 *Return: difference in s1,s2
*/
int _strcmp(char *s1, char *s2)
{
int x;
x = 0;
while (s1[x] != '\0' && s2[x] != '\0')
{
if (s1[x] != s2[x])
{
	return (s1[x] - s2[x]);
}
x++;
}
return (0);
}
