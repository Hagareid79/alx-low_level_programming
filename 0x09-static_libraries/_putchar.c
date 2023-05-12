#include <unistd.h>
/**
 * _putchar - writes the characters
 * @c: the character print
 * Return: on success 1 else 0 in error
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
