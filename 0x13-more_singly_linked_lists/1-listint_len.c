#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements of a listint_t list.
 * @h: pointer to head
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	unsigned long int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
