#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head: linked list at head
 * @index: index of deleted node
 * Return: boolean
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = malloc(sizeof(listint_t)), *tmp;
	unsigned int i = 0;

	tmp = *head;
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	while (tmp != NULL &&  i != idx - 1)
	{
		i++;
		tmp = tmp->next;
	}
	if (i == idx - 1)
	{
		free(tmp);
		return (0);
	}
	return (-1);
}
