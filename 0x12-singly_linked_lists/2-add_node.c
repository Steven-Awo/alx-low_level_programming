#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - A program that adds to the beginning of a list a new node
 * @head: The original or first  linked list
 * @str: The string to be added to the node
 * Return: hold (successful) or NULL (unsuccessful)
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *hold;

	if (head != NULL && str != NULL)
	{
	hold = malloc(sizeof(list_t));
	if (hold == NULL)
	{
	return (NULL);
	}
	hold->str = strdup(str);
	hold->len = _strlen(str);
	hold->next = *head;
	*head = hold;
	return (hold);
	}
	return (0);
}

/**
 * _strlen - A program that returns a string's length
 * @s: the number of strings
 * Return: String's length x (successfull)
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
