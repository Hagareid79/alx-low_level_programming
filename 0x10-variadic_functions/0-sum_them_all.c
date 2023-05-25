#include "variadic_functions.h"
/**
 * sum_them_all - all sums
 * @n: is a para
 * @...: is a para
 * Return:integer
*/
int sum_them_all(const unsigned int n, ...)
{
int x = 0, y = n;
va_list app;
if (n == 0)
return (0);
va_start(app, n);
while (y--)
x += va_arg(app, int);
va_end(app);
return (x);
}
