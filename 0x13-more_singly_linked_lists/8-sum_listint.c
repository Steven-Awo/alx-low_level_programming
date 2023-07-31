#include "lists.h"

/**
 * sum_listint - A program that adds all the data in
 * a listint_t list.
 * @head: the first node in the linked list
 * Return: add
 */

int sum_listint(listint_t *head)

{
	int addd = 0;
	listint_t *hold = head;

	while (hold)
	{
	addd += hold->n;
	hold = hold->next;
	}
	return (addd);
}

