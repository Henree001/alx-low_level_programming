#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: double pointer to head of node
 * @index: index to delete
 * Return: list with deleted node, 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head, *temp2;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp->next != NULL)
	{
		if (index - 1 == i)
		{
			temp2 = temp->next;
			temp->next = temp->next->next;
			temp->next->next->prev = temp;
			free(temp2);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
