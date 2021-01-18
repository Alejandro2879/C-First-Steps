#include "hash_tables.h"

/**
 * hash_table_print - Print all elements in a hast table.
 * @ht: Hash table to print.
 * Return: No return..
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int iter;
	int flag = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	for (iter = 0; iter < ht->size; iter++)
	{
		node = ht->array[iter];
		while (node)
		{
			if (flag > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag++;
			node = node->next;
		}
	}
	printf("}\n");
}
