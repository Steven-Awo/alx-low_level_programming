#include "lists.h"

/**
 * dlistint_len - A function that returns the number of 
 * elements in a double linked list
 * @h: the list head
 * Return: countr number of nodes
 */

size_t print_dlistint(const dlistint_t *h)

{
	int countr;

	countr = 0;
	if (h == NULL)
	{
	return (countr);
	}
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
	printf("%d\n", h->n);
	countr++;
	h = h->next;
	}
	return (countr);
}
