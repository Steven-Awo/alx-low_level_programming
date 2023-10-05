#include "hash_tables.h"

/**
 * hash_table_set - A function that adds or updates an element in the
 * a hash table.
 * @ht: the hash table pointer.
 * @key: The key to be added - can't be an empty string.
 * @value: The value associated with key.
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *neww;
	char *valuee_copyy;
	unsigned long int indx, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	valuee_copyy = strdup(value);
	if (valuee_copyy == NULL)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	for (x = indx; ht->array[x]; x++)
	{
	if (strcmp(ht->array[x]->key, key) == 0)
	{
	free(ht->array[x]->value);
	ht->array[x]->value = valuee_copyy;
	return (1);
	}}
	neww = malloc(sizeof(hash_node_t));
	if (neww == NULL)
	{
	free(valuee_copyy);
	return (0);
	}
	neww->key = strdup(key);
	if (neww->key == NULL)
	{
	free(neww);
	return (0);
	}
	neww->value = valuee_copyy;
	neww->next = ht->array[indx];
	ht->array[indx] = neww;
	return (1);
}
