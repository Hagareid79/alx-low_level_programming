#include <stdio.h>
#include <stdlib.h>
/**
 *main - print number
 *@argc: para
 *@argv: para
 *Return: 0 on succses
*/
int main(int argc, char *argv[])
{
if (argc == 2)
{
int x, y = 0, z = atoi(argv[1]);
int arr[] = {25, 10, 5, 2, 1};
for (x = 0; x < 5; x++)
{
if (z >= arr[x])
{
y += z / arr[x];
z = z % arr[x];
if (z % arr[x] == 0)
{
break;
}
}
}
printf("%d\n", y);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
