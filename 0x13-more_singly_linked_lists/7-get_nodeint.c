#include "lists.h"
/**
 * get_nodeint_at_index - gets node at index
 * @head: linked list at head
 * @index: index of node to grab
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		i++;
		head = head->next;
		if (index == i)
			break;
	}
	if (head->next == NULL)
		return (NULL);
	return (head);
}
