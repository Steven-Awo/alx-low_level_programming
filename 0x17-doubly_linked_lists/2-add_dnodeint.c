#include "lists.h"

/**
 * add_dnodeint - a function that adds a newr node at the
 * end of a dlistint_t list
 * @head: the list head
 * @n: the element's value
 * Return: newr (the address of the newr element)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newr;
	dlistint_t *x;

	newr = malloc(sizeof(dlistint_t));
	if (newr == NULL)
	{
	return (NULL);
	}
	newr->n = n;
	newr->prev = NULL;
	x = *head;
	if (x != NULL)
	{
	while (x->prev != NULL)
		x = x->prev;
	}
	newr->next = x;
	if (x != NULL)
		x->prev = newr;
	*head = newr;
	return (newr);
}
