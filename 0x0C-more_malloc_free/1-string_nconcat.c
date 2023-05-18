#include "main.h"
#include <stdio>
/**
 * *string_nconcat - allocates memory
 * @s1: is a integer
 * @s2: is a integer
 * @n: is a integer
 * Return: pointer of array
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int x, y, l1, l2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (l1 = 0; s1[l1] != '\0'; l1++)
;
for (l2 = 0; s2[l2] != '\0'; l2++)
;
s = malloc(l1 + n + 1);
if (s == NULL)
{
return (NULL);
}
for (x = 0; s1[x] != '\0'; x++)
s[x] = s1[x];
for (y = 0; y < n; y++)
{
s[x] = s2[y];
x++;
}
s[x] = '\0';
return (s);
}
