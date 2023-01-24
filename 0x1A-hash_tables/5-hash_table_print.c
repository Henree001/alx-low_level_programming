#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: a dictionary format of the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;
	char *c = ", ";

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{

		item = ht->array[i];
		if (i == ht->size - 1)
			*c = "}";
		while (item)
		{
			printf("'%s': '%s'%s", item->key, item->value, c);
			item = item->next;
		}
	}
	printf("\n");
}
