#include "lists.h"
/**
 * pop_listint - pops head node of list
 * @head: address of pointer to first node
 * Return: value of popped node
*/
int pop_listint(listint_t **head)
{
listint_t *no;
int n;
if (!head || !*head)
return (0);
no = (*head)->next;
n = (*head)->n;
free(*head);
*head = no;
return (n);
}
