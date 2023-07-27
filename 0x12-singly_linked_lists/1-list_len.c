#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - A program that show the number of elements that exist in a list
 * @h: A linked list
 * Return: numbs (succesful)
 */

size_t list_len(const list_t *h)

{
	size_t numbs = 0;

	while (h)
	{
	h = h->next;
	numbs++;
	}
	return (numbs);
}
