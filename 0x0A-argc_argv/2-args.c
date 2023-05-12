#include "main.h"
#include <stdio.h>
/**
 * main - print contactes
 * @argc: first para
 * @argv: second para
 *Return: zero
*/
int main(int argc, char const *argv[])
{
int x;
for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}
