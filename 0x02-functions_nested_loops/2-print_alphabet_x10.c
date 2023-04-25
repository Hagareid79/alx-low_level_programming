#include "main.h"
/**
 * print_alphabet_x10 -function
 *Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i, ch;
for (i = 1; i <= 10; i++)
{
for (ch = 97; ch <= 122; i++)
{
_putchar(ch);
}
_putchar('\n');
}
}
