#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: address of pointer to first node
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *no, *pre;
unsigned int x = 0;
if (!head || !*head)
return (-1);
if (!index)
{
no = *head;
*head = (*head)->next;
free(no);
return (1);
}
no = *head;
while (no)
{
if (x == index)
{
pre->next = no->next;
free(no);
return (1);
}
x++;
pre = no;
no = no->next;
}
return (-1);
}

