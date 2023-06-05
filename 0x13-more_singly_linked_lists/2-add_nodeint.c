#include "lists.h"
/**
 * add_nodeint - adds a node to the top
 * @head: pointer to first node
 * @n: value for new node
 * Return: pointer to new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nh = malloc(sizeof(listint_t));
if (!head || !nh)
return (NULL);
nh->next = NULL;
nh->n = n;
if (*head)
nh->next = *head;
*head = nh;
return (nh);
}

