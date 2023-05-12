#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - printing
 * @argc: para
 * @argv: para
 * Return: zero
*/
int main(int argc, char *argv[])
{
int z = 0;
char *c;
while (--argc)
{
for (c = argv[argc]; *c; c++)
if (*c < '0' || *c > '9')
return (printf("Erorr\n"), 1);
z += atoi(argv[argc]);
}
printf("%d\n", z);
return (0);
}
