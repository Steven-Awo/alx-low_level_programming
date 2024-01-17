#include "search_algos.h"
#include <math.h>

/**
 * jump_list - the function that searches for a value in an array of
 * integers using the jump search algorithm
 * @list: the input's list
 * @size: the array's size
 * @value: the value to be search in
 * Return: the indexx to the number
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, a, b;
	listint_t *prevus;

	if (list == NULL || size == 0)
	{
	return (NULL);
	}
	b = (size_t)sqrt((double)size);
	index = 0;
	a = 0;
	do {
		prevus = list;
		a++;
		index = a * b;

		while (list->next && list->index < index)
			list = list->next;
		if (list->next == NULL && index != list->index)
			index = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
	} while (index < size && list->next && list->n < value);
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prevus->index, (int)list->index);
	for (; prevus && prevus->index <= list->index; prevus = prevus->next)
	{
	printf("Value checked at index [%d] = [%d]\n",
			(int)prevus->index, prevus->n);
	if (prevus->n == value)
		return (prevus);
	}
	return (NULL);
}
