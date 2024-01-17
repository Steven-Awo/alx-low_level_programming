#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: the inputed list
 * @value: the value to be search in
 * Return: the index for the number
 */

skiplist_t *linear_skip(skiplist_t *list, int value)

{
	skiplist_t *ggo;

	if (list == NULL)
	{
	return (NULL);
	}
	ggo = list;
	do {
		list = ggo;
		ggo = ggo->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)ggo->index, ggo->n);
	} while (ggo->express && ggo->n < value);
	if (ggo->express == NULL)
	{
	list = ggo;
	while (ggo->next)
		ggo = ggo->next;
	}
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n",
			(int)list->index, (int)ggo->index);
	while (list != ggo->next)
	{
	printf("Value checked at index [%d] = [%d]\n",
			(int)list->index, list->n);
	if (list->n == value)
		return (list);
	list = list->next;
	}
	return (NULL);
}
