#include "lists.h"
/**
 * get_nodeint_at_index -  returns node at index
 * @head: pointer to first node
 * @index: index of node to get
 * Return: pointer to node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *no;
unsigned int x;
for (no = head, x = 0; no && x < index; no = no->next, x++)
;
return (no);
}
