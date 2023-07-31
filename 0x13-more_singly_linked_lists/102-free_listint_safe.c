#include "lists.h"

/**
 * free_listint_safe - A program that frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)

{
	size_t lengt = 0;
	int differ;
	listint_t *hold;

	if (!h || !*h)
	{
	return (0);
	}
	while (*h)
	{
	differ = *h - (*h)->next;
	if (differ > 0)
	{
	hold = (*h)->next;
	free(*h);
	*h = hold;
	lengt++;
	}
	else
	{
	free(*h);
	*h = NULL;
	lengt++;
	break;
	}
	}
	*h = NULL;
	return (lengt);
}
