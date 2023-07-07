#include <unistd.h>
/**
 * _putchar - vrites the character e to stdout
 * @c: The character to print
 * Return: On success 1, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
