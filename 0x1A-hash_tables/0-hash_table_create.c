#include "hash_tables.h"

/**
 * hash_table_create - Allocate memory for a hash table.
 * @size: Size of the table
 * Return: The new allocated memory.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_h_table;

	if (size == 0)
		return (NULL);
	new_h_table = malloc(sizeof(hash_table_t));
	if (!new_h_table)
		return (NULL);
	new_h_table->array = malloc(sizeof(hash_table_t *) * size);
	if (!new_h_table->array)
	{
		free(new_h_table);
		return (NULL);
	}
	new_h_table->size = size;
	return (new_h_table);
}
