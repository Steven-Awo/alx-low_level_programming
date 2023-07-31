#include "lists.h"

/**
 * listint_len - A program that returns the number of
 * elements in a linked list.
 * @h: the element in the list
 * Return: x (successful).
 */

size_t listint_len(const listint_t *h)

{
	size_t x = 0;

	while (h)
	{
	x++;
	h = h->next;
	}
	return (x);

}
