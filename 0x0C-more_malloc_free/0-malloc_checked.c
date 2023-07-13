#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - A program that allocates memory using malloc
 * @b: The value to allocated
 * Return: nothing (successful)
 */

void *malloc_checked(unsigned int b)

{
	void *x;

	x = malloc(b);
	if (x == NULL)
	{
	exit(98);
	}
	return (x);
}
