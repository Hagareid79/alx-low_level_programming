#include "main.h"
#include <stdio.h>
int check(char *s, int s, int e, int m);
int li(char *s);
/**
 *is_palindrome - is a function
 *@s: is the first parameter
 *Return: 0 or 1
*/
int is_palindrome(char *s)
{
int x = li(s);
return (check(s, 0, x - 1, x % 2));
}
/**
 *check - is fun
 *@s: is first para
 *@st: is second para
 *@e: is theird para
 *@m: is forth para
 *Return: integer
*/
int check(char *s, int st, int e, int m)
{
if (s[st] != s[e])
{
return (0);
}
else if ((st == e && m != 0) || (st == e + 1 && m == 0))
{
return (1);
}
else
{
return (check(s, st + 1, e - 1, m));
}
}
/**
 *li - is a function
 *@s: is first para
 *Return: integer
*/
int li(char *s)
{
int n = 0;
if (*s > '\0')
n += li(s + 1) + 1;
return (n);
}

