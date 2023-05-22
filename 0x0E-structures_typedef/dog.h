#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog
 * @name: is a name of dog
 * @age: is the age of dog
 * @owner: is owner,s name
 * Description: just a long dog
 * Return: struct of dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *scr);
int _strlen(char *s);
#endif
