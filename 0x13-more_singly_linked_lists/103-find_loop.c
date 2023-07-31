#include "lists.h"

/**
 * find_listint_loop - A program that detects the loop in a linked list
 * @head: the linked list to search for
 * Return: address or NULL
 */

listint_t *find_listint_loop(listint_t *head)

{
	listint_t *slowz = head;
	listint_t *fastx = head;

	if (!head)
	{
	return (NULL);
	}
	while (slowz && fastx && fastx->next)
	{
	fastx = fastx->next->next;
	slowz = slowz->next;
	if (fastx == slowz)
	{
	slowz = head;
	while (slowz != fastx)
	{
	slowz = slowz->next;
	fastx = fastx->next;
	}
	return (fastx);
	}
	}
	return (NULL);
}
