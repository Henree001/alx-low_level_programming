#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a node at the end
 * @head: start of node
 * @n: value to give new node
 * Return: the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *p = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
	return (new);
}
