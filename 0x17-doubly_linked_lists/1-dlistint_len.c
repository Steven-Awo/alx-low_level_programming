#include "lists.h"

/**
 * dlistint_len - A function that returns the number of
 * elements in a double linked list
 * @h: the list head
 * Return: countr the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
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
	countr++;
	h = h->next;
	}
	return (countr);
}
