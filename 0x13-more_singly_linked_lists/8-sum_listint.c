#include "lists.h"
/**
 * sum_listint - returns sum of all data
 * @head: pointer to first node
 * Return: sum
*/
int sum_listint(listint_t *head)
{
int s = 0;
while (head)
{
s += head->n;
head = head->next;
}
return (s);
}
