#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - a function
 * @str: the parameter
 * Return: lenth
*/
int _strlen(char *str)
{
int l = 0;
while (*str++)
l++;
return (l);
}
/**
 * _strcopy - a function
 * @dest: is a copy string
 * @src: is a string
 * Return: @des
*/
char *_strcopy(char *dest, char *src)
{
int x;
for (x = 0; src[x]; x++)
dest[x] = src[x];
dest[x] = '\0';
return (dest);
}
/**
 * new_dog - a function
 * @name: is a name
 * @age: is the age
 * @owner: dog owner
 *Return: struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
if (!name || age < 0 || !owner)
return (NULL);
dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if ((*dog).name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if ((*dog).owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->name = _strcopy(dog->name, name);
dog->age = age;
dog->owner = _strcopy(dog->owner, owner);
return (dog);
}







