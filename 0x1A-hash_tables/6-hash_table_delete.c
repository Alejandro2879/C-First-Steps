#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: Table to delete.
 * Return: No return.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int iter;
	hash_node_t *node = NULL;

	if (!ht || !ht->array)
		return;
	for (iter = 0; iter < ht->size; iter++)
	{
		node = ht->array[iter];
		while (node)
		{
			free(node->key);
			free(node->value);
			node = node->next;
			free(ht->array[iter]);
			ht->array[iter] = node;
		}
		free(ht->array[iter]);
	}
	free(ht->array);
	free(ht);
}
