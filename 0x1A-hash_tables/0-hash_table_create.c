#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 * @size: The array's size.
 * Return: If there'ss an error - NULL
 *         Otherwise - the new hash table pointer.
 */

hash_table_t *hash_table_create(unsigned long int size)

{
	hash_table_t *hsht;
	unsigned long int x;

	hsht = malloc(sizeof(hash_table_t));
	if (hsht == NULL)
	{
	return (NULL);
	}
	hsht->size = size;
	hsht->array = malloc(sizeof(hash_node_t *) * size);
	if (hsht->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		hsht->array[x] = NULL;
	return (hsht);
}
