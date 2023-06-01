#include "lists.h"
/**
 * add_node_end - adds a node to the start of the list
 * @head: address of pointer to head node
 * @str: str field of node
 * Return: size of list
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *nh = malloc(sizeof(list_t));
list_t *n = *head;
if (!head || !nh)
return (NULL);
if (str)
{
nh->str = strdup(str);
if (!nh->str)
{
free(nh);
return (NULL);
}
nh->len = _strlen(nh->str);
}
if (n)
{
while (n->next)
n = n->next;
n->next = nh;
}
else
*head = nh;
return (nh);
}
