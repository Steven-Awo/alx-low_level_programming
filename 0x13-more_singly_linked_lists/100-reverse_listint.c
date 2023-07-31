#include "lists.h"

/**
 * reverse_listint - A program that reverses a linked list
 * @head: the pointer for the first node in the list
 * Return: first node (head)
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *before = NULL;
	listint_t *after = NULL;

	while (*head)
	{
	after = (*head)->next;
	(*head)->next = before;
	before = *head;
	*head = after;
	}
	*head = before;
	return (*head);
}
