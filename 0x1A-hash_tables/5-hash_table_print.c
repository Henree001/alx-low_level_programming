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
	int comma_flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");
			item = ht->array[i];
			while (item)
			{
				printf("'%s': '%s'", item->key, item->value);
				if (item->next != NULL)
					printf(", ");
				item = item->next;
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
