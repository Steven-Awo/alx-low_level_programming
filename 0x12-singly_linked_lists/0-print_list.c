#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - A program that prints all the elements of a list
 * @h: A linked list
 * Return: count - number of nodes (successfull)
 */

size_t print_list(const list_t *h)

{
	size_t numbs = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
	printf("[0] (nil)\n");
	}
	else
	{
	printf("[%d] %s\n", h->len, h->str);
	}
	h = h->next;
	numbs++;
	}
	return (numbs);
}
