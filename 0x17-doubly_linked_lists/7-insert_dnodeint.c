#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts into a given
 * position a newr node
 * @h: the list's Heads
 * @idx: the newr node index
 * @n: the value of the newr node
 * Return: num(successful) or NULL (failed)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newr;
	dlistint_t *Heads;
	unsigned int x;

	newr = NULL;
	if (idx == 0)
		newr = add_dnodeint(h, n);
	else
	{
	Heads = *h;
	x = 1;
	if (Heads != NULL)
		while (Heads->prev != NULL)
			Heads = Heads->prev;
	while (Heads != NULL)
	{
	if (x == idx)
	{
	if (Heads->next == NULL)
		newr = add_dnodeint_end(h, n);
	else
	{
	newr = malloc(sizeof(dlistint_t));
	if (newr != NULL)
	{
	newr->n = n;
	newr->next = Heads->next;
	newr->prev = Heads;
	Heads->next->prev = newr;
	Heads->next = newr;
	}
	}
	break;
	}
	Heads = Heads->next;
	x++;
	}
	}
	return (newr);
}
