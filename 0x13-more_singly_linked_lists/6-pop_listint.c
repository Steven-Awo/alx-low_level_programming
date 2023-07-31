#include "lists.h"

/**
 * pop_listint - A program that deletes the head node of the linked list
 * @head: it points to the first node in the linked list.
 * Return: x (successfull),
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)

{
	listint_t *hold;
	int x;

	if (!head || !*head)
	{
	return (0);
	}
	x = (*head)->n;
	hold = (*head)->next;
	free(*head);
	*head = hold;
	return (x);
}

