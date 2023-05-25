#include "variadic_functions.h"
/**
 * print_numbers - all prints
 * @separator: is a para
 * @n: is a para
 * @...: is a para
 * Return:integer
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
int y = n;
va_list app;
if (n == 0)
{
printf("\n");
return;
}
va_start(app, n);
while (y--)
printf("%d%s", va_arg(app, int), y ? (separator ? separator : "") : "\n");
va_end(app);
}
