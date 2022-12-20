#include "lists.h"

/**
 * get_dnodeint_at_index - returns data of nth node
 * @head: head of node
 * @index: index wanted
 * Return: data of nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
