#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of
 * a dlistint_t linked list.
 * @head: the pointer to the head of the list
 * @index: the index of the node to be searched for, beginning from 0
 * Return: nth node(success) or null(fail)
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int sizes;
	dlistint_t *tmpr;

	sizes = 0;
	if (head == NULL)
	{
	return (NULL);
	}
	tmpr = head;
	while (tmpr)
	{
	if (index == sizes)
	{
	return (tmpr);
	}
	sizes++;
	tmpr = tmpr->next;
	}
	return (NULL);
}
