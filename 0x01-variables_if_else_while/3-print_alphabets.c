#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{char c = 'a';
char ch = 'A';
while (c <= 'z')
{
	putchar(c);
	c++;
}
while (ch <= 'Z')
{
	putchar(ch);
	ch++;
}
putchar('\n');
return (0);
}
