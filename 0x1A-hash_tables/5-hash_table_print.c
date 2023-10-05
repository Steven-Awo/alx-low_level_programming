#include "hash_tables.h"

/**
 * hash_table_print - A function that prints out a hash table.
 * @ht: the hash table pointer to print.
 * Description: Key/value pairs are to be printed in the order
 * that they should appear in the hash table's array.
 */

void hash_table_print(const hash_table_t *ht)

{
	hash_node_t *nodee;
	unsigned long int x;
	unsigned char comma_flag = 0;

	if (ht == NULL)
	{
	return;
	}
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
	if (ht->array[x] != NULL)
	{
	if (comma_flag == 1)
	{
	printf(", ");
	}
	nodee = ht->array[x];
	while (nodee != NULL)
	{
	printf("'%s': '%s'", nodee->key, nodee->value);
	nodee = nodee->next;
	if (nodee != NULL)
		printf(", ");
	}
	comma_flag = 1;
	}}
	printf("}\n");
}
