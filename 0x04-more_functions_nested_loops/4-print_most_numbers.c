#include "main.h"
/**
 *print_most_numbers -print 0-9 without 2-4
 *Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
continue;
_putchar(i + 48);
}
_putchar('\n');
}
