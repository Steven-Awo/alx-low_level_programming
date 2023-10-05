#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves the value thats 
 * associated with a key thats in a hash table.
 * @ht: the hash table's pointer.
 * @key: The key used to get the value of.
 * Return: If the key can't find a match - NULL.
 *         Otherwise - the value associated with the key in ht.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)

{
	hash_node_t *nod;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
	{
	return (NULL);
	}
	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
	{
	return (NULL);
	}
	nod = ht->array[indx];
	while (nod && strcmp(nod->key, key) != 0)
	{
	nod = nod->next;
	}
	return ((nod == NULL) ? NULL : nod->value);
}
