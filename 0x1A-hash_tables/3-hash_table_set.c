#include "hash_tables.h"

/**
 * hash_table_set - Insert or update a key on the hash table.
 * @ht: Hash table.
 * @key: Key.
 * @value: Value to be stored.
 * Return: 1 on success 0 on fail.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned long int size = ht->size;
	hash_node_t *node;

	if (!key || !ht || !(*key))
		return (0);

	/*get index*/
	index = key_index((const unsigned char *)key, size);

	if (ht->array[index] && !(search_upd(key, value, ht->array[index])))
		return (1);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (!(node->key) || !(node->value))
	{
		if (node->key)
			free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}


/**
 * search_upd - Compare if key already exists in the node.
 * @init_node: Box where nodes begin.
 * @key: Key value.
 * @value: Value  to be stored.
 * Return: 1 if itś empty, 0 if not
 */

int search_upd(const char *key, const char *value, hash_node_t *init_node)
{
	hash_node_t *node = init_node;

	while (node)
	{
		if (!(strcmp(node->key, key)))
		{
			free(node->value);
			node->value = strdup(value);
			return (0);
		}
		node = node->next;
	}
	return (1);
}
