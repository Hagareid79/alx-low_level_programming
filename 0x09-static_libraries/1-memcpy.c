#include "main.h"
/**
 * *_memcpy - copies memory
 * @dest: is the first parameter,memory ares
 * @src: source
 * @n : the length of src
 * Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
dest[x] = src[x];
}
return (dest);
}
