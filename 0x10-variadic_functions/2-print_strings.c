#include "variadic_functions.h"
/**
 * print_strings - all prints
 * @separator: is a para
 * @n: is a para
 * @...: is a para
 * Return:integer
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int y;
char *str;
va_list l;
va_start(l, n);
for (y = 0; y < n; y++)
{
str = va_arg(l, char*);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (y != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(l);
}
