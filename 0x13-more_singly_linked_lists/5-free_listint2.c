#include "lists.h"
/**
 *free_listint2 - frees a list of ints
 * @head: address of pointer to first node
 * Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *no, *t;
if (!head)
return;
no = *head;
while (no)
{
t = no;
no = no->next;
free(t);
}
*head = NULL;
}
