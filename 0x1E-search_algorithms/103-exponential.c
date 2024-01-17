#include "search_algos.h"

/**
  * _binary_search - A function that searches for a particular value
  * thats in the sorted array of only integers using the
  * exponential search.
  * @array: the 1st element's pointer of this array to be search.
  * @left: The index that start the [sub]array that to be searched.
  * @right: The index that end the [sub]array that to be searched.
  * @value: The value to be searched for.
  * Return: If not present or array is NULL, -1.
  *         Otherwise, the index.
  */

int _binary_search(int *array, size_t left, size_t right, int value)

{
	size_t x;

	if (array == NULL)
	{
	return (-1);
	}
	while (right >= left)
	{
	printf("Searching in array: ");
	for (x = left; x < right; x++)
		printf("%d, ", array[x]);
	printf("%d\n", array[x]);
	x = left + (right - left) / 2;
	if (array[x] == value)
	{
	return (x);
	}
	if (array[x] > value)
	{
	right = x - 1;
	}
	else
		left = x + 1;
	}
	return (-1);
}

/**
  * exponential_search - A function that searches for a particular value
  * thats in the sorted array of only integers using the
  * exponential search.
  * @array: the 1st element's pointer of this array to be search.
  * @size: The number of the elements thats in the array.
  * @value: The value to be searched for.
  * Return: If not present or array is NULL, -1.
  *         Otherwise, the index.
  */

int exponential_search(int *array, size_t size, int value)

{
	size_t x = 0, right;

	if (array == NULL)
	{
	return (-1);
	}
	if (array[0] != value)
	{
	for (x = 1; x < size && array[x] <= value; x = x * 2)
		printf("Value checked array[%ld] = [%d]\n",
				x, array[x]);
	}
	right = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n",
			x / 2, right);
	return (_binary_search(array,
				x / 2, right, value));
}
