#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);

int shash_table_set(shash_table_t *ht, const char *key, const char *value);

char *shash_table_get(const shash_table_t *ht, const char *key);

void shash_table_print(const shash_table_t *ht);

void shash_table_print_rev(const shash_table_t *ht);

void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - A function that creates a sorted hash table.
 * @size: The neww sorted hash table size.
 * Return: If any error do occur - NULL.
 *         Otherwise - the pointer to reprs the neww sorted hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)

{
	shash_table_t *hsht;
	unsigned long int x;

	hsht = malloc(sizeof(shash_table_t));
	if (hsht == NULL)
	{
	return (NULL);
	}
	hsht->size = size;
	hsht->array = malloc(sizeof(shash_node_t *) * size);
	if (hsht->array == NULL)
	{
	return (NULL);
	}
	for (x = 0; x < size; x++)
	{
	hsht->array[x] = NULL;
	}
	hsht->shead = NULL;
	hsht->stail = NULL;
	return (hsht);
}

/**
 * shash_table_set - A function that adds an element to the sorted
 * hash table.
 * @ht: the sorted hash table pointer.
 * @key: The key to be added - it can't be an empty str.
 * @value: The value thats associated with the key.
 * Return: if failed - 0.
 *         Otherwise - 1.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)

{
	shash_node_t *neww, *tmpr;
	char *value_copyy;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_copyy = strdup(value);
	if (value_copyy == NULL)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	tmpr = ht->shead;
	while (tmpr)
	{
	if (strcmp(tmpr->key, key) == 0)
	{
	free(tmpr->value);
	tmpr->value = value_copyy;
	return (1);
	}
	tmpr = tmpr->snext;
	}
	neww = malloc(sizeof(shash_node_t));
	if (neww == NULL)
	{
	free(value_copyy);
	return (0);
	}
	neww->key = strdup(key);
	if (neww->key == NULL)
	{
	free(value_copyy);
	free(neww);
	return (0);
	}
	neww->value = value_copyy;
	neww->next = ht->array[indx];
	ht->array[indx] = neww;
	if (ht->shead == NULL)
	{
	neww->sprev = NULL;
	neww->snext = NULL;
	ht->shead = neww;
	ht->stail = neww;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
	neww->sprev = NULL;
	neww->snext = ht->shead;
	ht->shead->sprev = neww;
	ht->shead = neww;
	}
	else
	{
	tmpr = ht->shead;
	while (tmpr->snext != NULL && strcmp(tmpr->snext->key, key) < 0)
		tmpr = tmpr->snext;
	neww->sprev = tmpr;
	neww->snext = tmpr->snext;
	if (tmpr->snext == NULL)
		ht->stail = neww;
	else
		tmpr->snext->sprev = neww;
	tmpr->snext = neww;
	}
	return (1);
}

/**
 * shash_table_get - A function that retrieves the value thats associated
 * with a key in the sorted hash table.
 * @ht: the sorted hash table pointer.
 * @key: The key used to get the value of.
 * Return: If the key can't find a match - NULL.
 *         Otherwise - the value that's associated with the key in ht.
 */

char *shash_table_get(const shash_table_t *ht, const char *key)

{
	shash_node_t *nod;
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
	nod = ht->shead;
	while (nod != NULL && strcmp(nod->key, key) != 0)
	{
	nod = nod->snext;
	}
	return ((nod == NULL) ? NULL : nod->value);
}

/**
 * shash_table_print - A function that prints out a sorted hash table in
 * order.
 * @ht: the sorted hash table pointer.
 */

void shash_table_print(const shash_table_t *ht)

{
	shash_node_t *nod;

	if (ht == NULL)
	{
	return;
	}
	nod = ht->shead;
	printf("{");
	while (nod != NULL)
	{
	printf("'%s': '%s'", nod->key, nod->value);
	nod = nod->snext;
	if (nod != NULL)
	{
	printf(", ");
	}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - A function that prints out a sorted hash table in
 * reverse order.
 * @ht: the sorted hash table pointer to print.
 */

void shash_table_print_rev(const shash_table_t *ht)

{
	shash_node_t *nod;

	if (ht == NULL)
	{
	return;
	}
	nod = ht->stail;
	printf("{");
	while (nod != NULL)
	{
	printf("'%s': '%s'", nod->key, nod->value);
	nod = nod->sprev;
	if (nod != NULL)
	{
	printf(", ");
	}
	}
	printf("}\n");
}

/**
 * shash_table_delete - A function that deletes the sorted hash table.
 * @ht: the sorted hash table pointer.
 */

void shash_table_delete(shash_table_t *ht)

{
	shash_table_t *Headd = ht;
	shash_node_t *nod, *tmpr;

	if (ht == NULL)
	{
	return;
	}
	nod = ht->shead;
	while (nod)
	{
	tmpr = nod->snext;
	free(nod->key);
	free(nod->value);
	free(nod);
	nod = tmpr;
	}
	free(Headd->array);
	free(Headd);
}
