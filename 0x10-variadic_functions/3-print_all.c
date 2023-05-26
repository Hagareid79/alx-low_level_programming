#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include "stdlib.h"
/**
 * print_all - all code
 * @format: is a para
 * @...:is para
 * Return:0 Always
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *sep = "";
va_list list;
va_start(list, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nill)";
printf("%s%s", sep, str);
break;
default:
i++;
continue;
}
sep = ",";
i++;
}
}
printf("\n");
va_end(list);
}
