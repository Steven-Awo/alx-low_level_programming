#include "function_pointers.h"

/**
 * array_iterator - A program that xecutes a function given as
 * a parameter on each element of an array.
 * @array: The function that holds the array
 * @size: The size of te array
 * @action: The pointer to the fuction
 * Return: void (successful)
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned x = 0;

	if (array != NULL && action != NULL)
	{
	while (x < size)
	{
	action(array[x]);
	x++;
	}
	}
}
