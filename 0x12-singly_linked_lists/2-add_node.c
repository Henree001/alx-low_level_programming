#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: address of head
 * @str: string
 * Return: a pointer to list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t);
	if (list_t ptr == NULL)
		return NULL;
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
