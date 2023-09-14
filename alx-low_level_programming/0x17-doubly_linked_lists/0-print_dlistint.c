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
	if (x == NULL)
	{
	return (countr);
	}
	while (x->prev != NULL)
		x = x->prev;
	while (x != NULL)
	{
	printf("%d\n", x->n);
	countr++;
	x = x->next;
	}
	return (countr);
}
