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
	size_t indx, a, b;
	listint_t *prevus;

	if (list == NULL || size == 0)
	{
	return (NULL);
	}
	b = (size_t)sqrt((double)size);
	indx = 0;
	a = 0;
	do {
		prevus = list;
		a++;
		indx = a * b;

		while (list->next && list->indx < indx)
			list = list->next;
		if (list->next == NULL && indx != list->indx)
			indx = list->indx;
		printf("Value checked at indx [%d] = [%d]\n",
				(int)indx, list->n);

	} while (indx < size && list->next && list->n < value);
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prevus->indx,
			(int)list->indx);

	for (; prevus && prevus->indx <= list->indx; prevus = prevus->next)
	{
	printf("Value checked at indx [%d] = [%d]\n", (int)prevus->indx, prevus->n);
	if (prevus->n == value)
		return (prevus);
	}
	return (NULL);
}
