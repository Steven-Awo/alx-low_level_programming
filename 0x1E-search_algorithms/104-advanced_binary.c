#include "search_algos.h"

/**
 * rec_search - the function that searches for a value in an array of
 * integers using the binary search algorithm
 * @array:  the inputed array
 * @size: the array's size
 * @value: the value to be search in
 * Return: the index for the number
 */

int rec_search(int *array, size_t size, int value)

{
	size_t hallfs = size / 2;
	size_t x;

	if (array == NULL || size == 0)
	{
	return (-1);
	}
	printf("Searching in array");
	for (x = 0; x < size; x++)
	{
	printf("%s %d", (x == 0) ? ":" : ",", array[x]);
	}
	printf("\n");
	if (hallfs && size % 2 == 0)
	{
	hallfs--;
	}
	if (value == array[hallfs])
	{
	if (hallfs > 0)
	{
	return (rec_search(array, hallfs + 1, value));
	}
	return ((int)hallfs);
	}
	if (value < array[hallfs])
	{
	return (rec_search(array, hallfs + 1, value));
	}
	hallfs++;
	return (rec_search(array + hallfs, size - hallfs, value) + hallfs);
}

/**
 * advanced_binary - the function that calls to the rec_search to
 * return the number's index
 * @array:  the inputed array
 * @size: the array's size
 * @value: the value to be search in
 * Return: the index for the number
 */

int advanced_binary(int *array, size_t size, int value)

{
	int indx;

	indx = rec_search(array, size, value);
	if (indx >= 0 && array[indx] != value)
	{
	return (-1);
	}
	return (indx);
}
