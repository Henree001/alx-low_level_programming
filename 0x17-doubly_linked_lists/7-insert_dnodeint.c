#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: head of node
 * @idx: index to insert node
 * @n: data for new node
 * Return: list with inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		new->next = temp;
		new->prev = NULL;
		temp->prev = new;
		temp = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (i == idx)
		{
			new->prev = temp;
			new->next = temp->next;
			temp->next->prev = new;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
