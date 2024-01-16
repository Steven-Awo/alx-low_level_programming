#include "search_algos.h"

/**
 * recursive_search - the function that searches for a value in an array of
 * integers using the Binary search algorithm
 * @array:  the inputed array
 * @size: the array's size
 * @value: the value to be search in
 * Return: the indexx to the number
 */

int recursive_search(int *array, size_t size, int value)

{
	size_t halff = size / 2;
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
	if (halff && size % 2 == 0)
	{
	halff--;
	}
	if (value == array[halff])
	{
	return ((int)halff);
	}
	if (value < array[halff])
	{
	return (recursive_search(array, halff, value));
	}
	halff++;
	return (recursive_search(array + halff, size - halff, value) + halff);
}

/**
 * binary_search - A function that calls to the binary_search to
 * return the indexx for the number
 * @array: the inputed array
 * @size: the array's size
 * @value: the value to be search in
 * Return: the indexx for the number
 */

int binary_search(int *array, size_t size, int value)

{
	int indexx;

	indexx = recursive_search(array, size, value);

	if (indexx >= 0 && array[indexx] != value)
	{
	return (-1);
	}
	return (indexx);
}
