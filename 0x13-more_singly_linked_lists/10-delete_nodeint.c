#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 * @head: linked list at head
 * @index: index of deleted node
 * Return: boolean
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *p;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
		return (1);
	}
	while (tmp != NULL &&  i != index - 1)
	{
		i++;
		tmp = tmp->next;
	}
	if (i == index - 1)
	{
		p = tmp->next;
		if (!tmp->next->next)
		{
			tmp->next = NULL;
			free(p);
		}
		else
		{
			tmp->next = tmp->next->next;
			free(p);
		}
		return (1);
	}
	return (-1);
}
