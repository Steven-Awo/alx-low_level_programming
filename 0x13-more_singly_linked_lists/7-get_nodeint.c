#include "lists.h"

/**
 * get_nodeint_at_index - A program that returns the specified
 * node of a linked list
 * @head: the first node in the linked list
 * @index: the specified node to return
 * Return: hold (successfully) or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int x = 0;
	listint_t *hold = head;

	while (hold && x < index)
	{
	hold = hold->next;
	x++;
	}
	return (hold ? hold : NULL);
}
