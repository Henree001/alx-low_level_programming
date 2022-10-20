#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds node at end
 * @head: head
 * @str: string to add
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t)), *p = *head;

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	while (p->next != NULL)
		p = p->next;
	p->next = ptr;
	return (ptr);
}
