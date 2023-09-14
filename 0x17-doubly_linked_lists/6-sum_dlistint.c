#include "lists.h"

/**
 * sum_dlistint - A functionthat returns the total total of all the
 * data (n) of a doubly linked list
 * @head: the list's head
 * Return: total (sum of the data)
 */
int sum_dlistint(dlistint_t *head)
{
	int total;

	total = 0;
	if (head != NULL)
	{
	while (head->prev != NULL)
	{
	head = head->prev;
	}
	while (head != NULL)
	{
	total += head->n;
	head = head->next;
	}
	}
	return (total);
}
