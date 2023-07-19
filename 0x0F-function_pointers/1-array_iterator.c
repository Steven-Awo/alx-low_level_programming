#include "function_pointers.h"

/**
 * array_iterator - A program that xecutes a function given as
 * a parameter on each element of an array.
 * @array: The function that holds the array
 * @size: The size of te array
 * @action: The pointer to the fuction
 * Return: -1 orvoid (successful)
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t x = 0;

	if (size > 0)
	{
	if (array != NULL && action != NULL)
	{
	while (x < size)
	{
	action(array[x]);
	x++;
	}
	}
	}
}
