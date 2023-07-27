#include "main.h"
#include <stdlib.h>

/**
 * create_array- A program that creates an array of chars
 * @size: The size of array
 * @c: The char that should fill up the array
 * Return: s or NULL
 */

char *create_array(unsigned int size, char c)

{
	char *a;
	unsigned int x;

	if (size == 0)
	{
	return (NULL);
	}
	a = (char *)malloc(size * sizeof(char));
	if (a == NULL)
	{
	return (NULL);
	}

	for (x = 0; x < size; x++)
	{
	a[x] = c;
	}
	return (a);
}
