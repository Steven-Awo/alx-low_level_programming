#include "lists.h"

/**
 * add_nodeint - A program that dds a new node at the beginning
 * of a listint_t list the linked list.
 * @head: it points to the first node in the linked list
 * @n: the element to input into the new node
 * Return: x (successful).
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *x;

	x = malloc(sizeof(listint_t));
	if (!x)
	{
	return (NULL);
	}
	x->n = n;
	x->next = *head;
	*head = x;
	return (x);
}
