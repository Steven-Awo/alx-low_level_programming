#include "hash_tables.h"

/**
 * key_index - A function that gets the index of a key/value
 * pair that should be stored in an array of a hash table.
 * @key: The key that's to get the index of.
 * @size: The array size of the hash table.
 * Return: The key's index.
 * Description: Uses djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)

{
	return (hash_djb2(key) % size);
}
