#include "lists.h"

/**
 * insert_nodeint_at_index - A program that inserts a new node into
 * a position at a perticuar position in a linked list.
 * @head: it points to the first node in the linked list
 * @idx: number where the new node is added to.
 * @n: the data to insert in the new node
 * Return: new node(newz), or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	unsigned int x;
	listint_t *newz;
	listint_t *hold = *head;

	newz = malloc(sizeof(listint_t));
	if (!newz || !head)
	{
	return (NULL);
	}
	newz->n = n;
	newz->next = NULL;
	if (idx == 0)
	{
	newz->next = *head;
	*head = newz;
	return (newz);
	}
	for (x = 0; hold && x < idx; x++)
	{
	if (x == idx - 1)
	{
	newz->next = hold->next;
	hold->next = newz;
	return (newz);
	}
	else
	{
	hold = hold->next;
	}
	}
	return (NULL);
}
