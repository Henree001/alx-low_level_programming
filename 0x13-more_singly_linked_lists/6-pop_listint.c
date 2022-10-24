#include "lists.h"
/**
 * pop_listint - pops a node out
 * @head: linked list address
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int i;

	if (*head == NULL)
		return (0);
	p = *head;
	i = p->n;
	free(*head);
	*head = p->next;
	return (i);
}
