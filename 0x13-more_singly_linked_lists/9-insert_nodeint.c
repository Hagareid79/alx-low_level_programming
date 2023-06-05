#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at given index
 * @head: address of pointer to first node
 * @idx: index to insert new node
 * @n: n value of new node
 * Return: address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *no, *nh = malloc(sizeof(listint_t));
unsigned int x = 0;
if (!head || !nh)
return (NULL);
nh->n = n;
nh->next = NULL;
if (!idx)
{
nh->next = *head;
*head = nh;
return (nh);
}
no = *head;
while (no)
{
if (x == idx - 1)
{
nh->next = no->next;
no->next = nh;
return (nh);
}
x++;
no = no->next;
}
free(nh);
return (NULL);
}
