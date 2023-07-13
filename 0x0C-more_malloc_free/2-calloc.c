#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A program that allocates memory for an array, using malloc
 * @nmemb: The array of elements
 * @size: The size of element
 * Return: z (successful) or NULL (unsuccesssful)
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	int x = 0;
	int y = 0;
	char *z;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	y = nmemb * size;
	z = malloc(y);

	if (z == NULL)
	{
	return (NULL);
	}
	while (x < y)
	{
	z[x] = 0;
	x++;
	}
	return (z);
}
