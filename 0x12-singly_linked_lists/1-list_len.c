#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len - prints a list
 * @h: head of list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned long int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
