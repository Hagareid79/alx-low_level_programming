#include "lists.h"
/**
 * add_nodeint_end - adds a node to the bottom
 *@head: pointer to first node
 * @n: value for new node
 * Return: pointer to new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nh = malloc(sizeof(listint_t));
listint_t *no;
if (!head || nh)
return (NULL);
nh->next = NULL;
nh->n = n;
if (!*head)
*head = nh;
else
{
no = *head;
while (no->next)
no = no->next;
no->next = nh;
}
return (nh);
}
