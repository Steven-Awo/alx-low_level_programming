#include "search_algos.h"
#include <math.h>

/**
 * jump_search - the function that searches for a value in an array of
 * integers using the Jump search algorithm
 * @array:  the inputed array
 * @size: the array's size
 * @value: the value to be search in
 * Return: the index for the number
 */

int jump_search(int *array, size_t size, int value)

{
	int indxx, a, b, previs;

	if (array == NULL || size == 0)
	{
	return (-1);
	}
	a = (int)sqrt((double)size);
	b = 0;
	previs = indxx = 0;
	do {
		printf("Value checked array[%d] = [%d]\n",
				indxx, array[indxx]);
		if (array[indxx] == value)
		{
		return (indxx);
		}
		b++;
		previs = indxx;
		indxx = b * a;
	} while (indxx < (int)size && array[indxx] < value);
	printf("Value found between indexes [%d] and [%d]\n",
			previs, indxx);
	for (; previs <= indxx && previs < (int)size; previs++)
	{
	printf("Value checked array[%d] = [%d]\n", previs,
			array[previs]);
	if (array[previs] == value)
	{
	return (previs);
	}
	}
	return (-1);
}
