#include <unistd.h>
/**
 * _putchar - write a character
 * @c: is character
 * Return: on success 1 and error in 0
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
