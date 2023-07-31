#include "lists.h"

/**
 * free_listint - A program that frees a linked list
 * @head: listint_t list to be freed
 * Return: void (nothing)
 */

void free_listint2(listint_t **head)

{
	listint_t *hold;

	if (head == NULL)
	{
	return;
	}
	while (*head)
	{
	hold = (*head)->next;
	free(*head);
	*head = hold;
	}
	*head = NULL;
}
