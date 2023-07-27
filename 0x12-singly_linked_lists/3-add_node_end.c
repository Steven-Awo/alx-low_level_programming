#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - A program that adds to the end of a list a new node
 * @head: The first linked list
 * @str: The string to add to the node
 * Return: hold and new list (successful) or NULL (unsuccessful)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw_list, *hold;

	if (str != NULL)
	{
	nw_list = malloc(sizeof(list_t));
	if (nw_list == NULL)
		return (NULL);
	nw_list->str = strdup(str);
	nw_list->len = _strlen(str);
	nw_list->next = NULL;
	if (*head == NULL)
	{
		*head  = nw_list;
		return (*head);
	}
	hold = *head;
	while (hold->next)
	{
	hold = hold->next;
	}
	hold->next = nw_list;
	return (hold);
	}
	return (NULL);
}

/**
  * _strlen - A program that returns the length of a string
  * @s: the string to be counted
  * Return: The string's length
  */

int _strlen(const char *s)

{
	int x = 0;

	while (*s)
	{
		s++;
		x++;
	}
	return (x);
}
