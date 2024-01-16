#include "search_algos.h"

/**
 * linear_search - the function that searches for an array of ints
 * for a value by using the algorithm Linear search
 * @array: the inputed array
 * @size: the array's size
 * @value: the value to be searched in
 * Return: if null (-1) else EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)

{
	int x;

	if (array == NULL)
	{
	return (-1);
	}

	for (x = 0; x < (int)size; x++)
	{
	printf("Value checked array[%u] = [%d]\n", x, array[x]);
	if (value == array[x])
	{
	return (x);
	}
	}
	return (-1);
}
