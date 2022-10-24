#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to head
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	unsigned long int i = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
