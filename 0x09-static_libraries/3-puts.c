#include "main.h"
/**
 * _puts -print a string followed by new line
 * @str: is the parameter
 * Return: no anything
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
