#include "lists.h"
/**
 * free_list - frees all nodes of a list
 * @head: pointer to head node
 * Return: void
*/
void free_list(list_t *head)
{
list_t *n, *nh;
if (!head)
return;
n = head;
while (n)
{
nh = n->next;
free(n->str);
free(n);
n = nh;
}
}
