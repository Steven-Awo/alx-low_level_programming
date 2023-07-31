#include "lists.h"

/**
 * print_listint - A program that prints every element in a list.
 * @h: the element in the list
 * Return: x (successfully)
 */

size_t print_listint(const listint_t *h)

{
	size_t x = 0;

	while (h)
	{
	printf("%d\n", h->n);
	x++;
	h = h->next;
	}
	return (x);
}
