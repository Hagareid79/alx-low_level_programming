#include <unistd.h>
/**
 * _putchar - write a character
 * @c: is a parmeter
 * Return: on success 1 else 0 in error
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
