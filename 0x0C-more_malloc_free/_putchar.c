#include <unisted.h>
/**
 * _putchar - writes the character
 * @c: is a character
 * Return: on success 1 else 0 in error
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
