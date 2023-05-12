#include "main.h"
/**
 **_strcpy -copies the pointer
 *@dest: is the first parameter
 *@src: is the second parameter
 *Return: pointer
*/
char *_strcpy(char *dest, char *src)
{
int s = -1;
do {
s++;
dest[s] = src[s];
} while (src[s] != '\0');
return (dest);
}
