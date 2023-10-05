#include "hash_tables.h"

/**
 * hash_table_delete - A void fuction that deletes a hash table.
 * @ht: the pointer to hash table.
 */

void hash_table_delete(hash_table_t *ht)

{
	hash_table_t *Head = ht;
	hash_node_t *nodee, *tmpr;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
	if (ht->array[x] != NULL)
	{
	nodee = ht->array[x];
	while (nodee != NULL)
	{
	tmpr = nodee->next;
	free(nodee->key);
	free(nodee->value);
	free(nodee);
	nodee = tmpr;
	}}}
	free(Head->array);
	free(Head);
}
