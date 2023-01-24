#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp, *temp1;

	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			temp1 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp1;
		}
	}
	free(ht->array);
	free(ht);
}
