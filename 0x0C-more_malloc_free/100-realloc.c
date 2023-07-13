#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - A program that  reallocates a memory block using malloc and free
 * @ptr: The pointer
 * @old_size: The old size of memory
 * @new_size: The new size of memory
 * Return: x (successsful) or NULL for (unsuccesssful)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *x;
	unsigned int y;

	if (new_size == old_size)
	{
	return (ptr);
	}
	if (ptr == NULL)
	{
	x = malloc(new_size);
	if (x == NULL)
	{
	return (NULL);
	}
	return (x);
	}
	else
	{
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	}
	x = malloc(new_size);
	if (x == NULL)
	{
	return (NULL);
	}
	for (y = 0; y < old_size && y < new_size; y++)
	{
	x[y] = ((char *) ptr)[y];
	}
	free(ptr);
	return (x);
}
