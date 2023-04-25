#include "main.h"
/**
 *times_table -print 9 times table
*/
void times_table(void)
{
int n, mult, p;
for (n = 0; n <= 9; n++)
{
_putchar(48);
for (mult = 1; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ');
p = n * mult;
if (p <= 9)
_putchar(' ');
else
_putchar((p / 10) + 48);
_putchar((p % 10) + 48);
}
_putchar('\n');
}
}
