#ifndef _LINKED_LIST
#define _LINKED_LIST
#include <stddef.h>

/**
 * struct list_s - A program structure to a singly linked list
 * @str: string - the malloc'ed string
 * @len: the string's length
 * @next: the next node thats pointe
 * Description: A singly linked list node structure
 * for project in alx
 */

typedef struct list_s

{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

int _strlen(const char *s);

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

#endif
