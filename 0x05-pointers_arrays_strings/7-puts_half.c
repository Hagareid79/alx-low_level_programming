#include "main.h"
/**
 * puts_half - print the second of string
 *@str: is an array of char
 *Return: no anything
*/
void puts_half(char *str)
{
int j;
for (j = 0; str[j] != '\0'; j++)
{
j++;
}
for (j /= 2; str[j] != '\0'; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
