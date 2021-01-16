#include "hash_tables.h"

/**
 * key_index - Use djb2 function and array size to give an index in the array
 * @key: String that djb2 should compute.
 * @size: Size of the array.
 * Return: Index in the array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
