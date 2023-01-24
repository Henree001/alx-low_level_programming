#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to hash table
 * @ht: hash table to update
 * @key: key
 * @value: value of key
 * Return: updated table
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	hash_node_t *temp;
	unsigned long int index = key_index((unsigned char *)key, ht->size);


	if (ht == NULL || strlen(key) == 0 || key == NULL || value == NULL)
		return (0);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
	{
		return (0);
	}
	element->key = strdup(key);
	element->value = strdup(value);
	element->next = ht->array[index];
	ht->array[index] = element;
	return (1);
}
