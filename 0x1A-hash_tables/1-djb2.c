#include "hash_tables.h"

/**
 * hash_djb2 - The Hash function that implement the djb2 algorithm.
 * @str: The string to be hashed.
 * Return: The calculated hashed.
 */

unsigned long int hash_djb2(const unsigned char *str)

{
	unsigned long int hsh;
	int x;

	hsh = 5381;
	while ((x = *str++))
	{
	hsh = ((hsh << 5) + hsh) + x; /* hsh * 33 + x */
	}
	return (hsh);
}
