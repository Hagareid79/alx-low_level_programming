#include "main.h"
/**
 *_isalpha - chech if alpha or no
 *@c: takes input from function
 *Return: 1 if c is alpha else return 0 (Success)
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
