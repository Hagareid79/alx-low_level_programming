#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: is a name
 * @f: is function
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
