#include <stdlib.h>
#include "lists.h"

/**
  * free_list -  program that frees a linked list.
  * @head: The starting node of the linked list
  * Return: void (successfull)
  */

void free_list(list_t *head)

{
	list_t *hold;

	while (head)
	{
	hold = head;
	head = head->next;
	free(hold->str);
	free(hold);
	}
	free(head);
}
