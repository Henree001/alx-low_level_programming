#include "lists.h"
/**
 * pop_listint - pops a node out
 * @head: linked list address
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *p, *ptr;
	int i;

	if (*head == NULL)
		return (0);
	p = *head;
	i = p->n;
	ptr = p->next;
	*head = ptr;
	free(p);
	return (i);
}
