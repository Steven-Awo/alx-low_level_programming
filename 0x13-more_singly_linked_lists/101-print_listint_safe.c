#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - A program that counts the number of special
 * nodes in the looped listint_t linked list.
 * @head: the pointer to the first node in the linked list to check.
 * Return:  0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slowly, *fastx;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
	{
	return (0);
	}
	slowly = head->next;
	fastx = (head->next)->next;
	while (fastx)
	{
	if (slowly == fastx)
	{
	slowly = head;
	while (slowly != fastx)
	{
	n++;
	slowly = slowly->next;
	fastx = fastx->next;
	}
	slowly = slowly->next;
	while (slowly != fastx)
	{
	n++;
	slowly = slowly->next;
	}
	return (n);
	}
	slowly = slowly->next;
	fastx = (fastx->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - A program that prints a list carefully.
 * @head: A pointer to the head of the listint_t list.
 * Return: nd (successfully).
 */

size_t print_listint_safe(const listint_t *head)

{
	size_t nd, numb = 0;

	nd = looped_listint_len(head);
	if (nd == 0)
	{
	for (; head != NULL; nd++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}
	else
	{
	for (numb = 0; numb < nd; numb++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nd);
}
