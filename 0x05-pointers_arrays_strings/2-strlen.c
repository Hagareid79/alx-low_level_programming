#include "main.h"
/**
 *_strlen - returns the length of the string
 *@s: string parameter
 *Return: length of string
*/
int _strlen(char *s)
{
int i;
for (i = 0; *s != '\0'; s++)
{
++i;
}
return (i);
}
