#include <unistd>
/**
 * _putchar - write a character c
 * @c: is the character to print
 * Return: on success 1 else 0 on error
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
