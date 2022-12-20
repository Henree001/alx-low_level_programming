#include "lists.h"

/**
 * sum_dlistint - returns the sum of all node data
 * @head: head of node
 * Return: sum of node data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
