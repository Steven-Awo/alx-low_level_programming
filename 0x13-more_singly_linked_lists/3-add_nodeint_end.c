#include "lists.h"

/**
 * add_nodeint_end - A program that adds a new node at the end
 * of a listint_t list the linked list.
 * @head: it points to the first node in the linked list
 * @n: the element to input into the new node
 * Return: x (successful) or NULL (Unsuccessful).
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *x;
	listint_t *hold = *head;

	x = malloc(sizeof(listint_t));
	if (!x)
	{
	return (NULL);
	}
	x->n = n;
	x->next = NULL;
	if (*head == NULL)
	{
	*head = x;
	return (x);
	}
	while (hold->next)
	{
	hold = hold->next;
	}
	hold->next = x;
	return (x);
}
