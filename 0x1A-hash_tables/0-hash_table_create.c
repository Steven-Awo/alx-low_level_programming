#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 * @size: The array's size.
 * Return: If there'ss an error - NULL.
 *         Otherwise - new hash table pointer.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hst;
	unsigned long int x;

	hst = malloc(sizeof(hash_table_t));
	if (hst == NULL)
	{
	return (NULL);
	}
	hst->size = size;
	hst->array = malloc(sizeof(hash_node_t *) * size);
	if (hst->array == NULL)
	{
	return (NULL);
	}
	for (x = 0; x < size; x++)
	{
	hst->array[x] = NULL;
	}
	return (hst);
}
