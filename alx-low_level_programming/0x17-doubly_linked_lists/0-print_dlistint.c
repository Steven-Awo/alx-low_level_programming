#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements of a in
 * dlistint_t list
 * @h: the head of the list
 * Return: the number of nodes
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
