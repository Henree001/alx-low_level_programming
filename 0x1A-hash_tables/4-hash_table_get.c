#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value by key
 * @ht: hash table
 * @key: key to look for
 * Return: associated value, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = key_index((unsigned char *)key, ht->size);
	hash_node_t *item = ht->array[idx];

	if (key == NULL || ht == NULL)
		return (NULL);
	while (item)
	{
		if (strcmp(item->key, key) == 0)
		{
			return (item->value);
		}
		item = item->next;
	}
	return (NULL);
}
