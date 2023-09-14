#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a newr node at the
 * end of a dlistint_t list
 * @head: the list head
 * @n: the element's value
 * Return: newr (the address of the newr element)
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *x;
	dlistint_t *newr;

	newr = malloc(sizeof(dlistint_t));
	if (newr == NULL)
	{
	return (NULL);
	}
	newr->n = n;
	newr->next = NULL;
	x = *head;
	if (x != NULL)
	{
	while (x->next != NULL)
		x = x->next;
	x->next = newr;
	}
	else
	{
	*head = newr;
	}
	newr->prev = x;
	return (newr);
}
