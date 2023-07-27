#include "function_pointers.h"

/**
 * int_index - A program that xecutes a function given as
 * a parameter on each element of an array.
 * @array: The function that holds the array
 * @size: The size of te array
 * @cmp: The pointer to the fuction
 * Return: -1 orvoid (successful)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
	if (array != NULL && cmp != NULL)
	{
	while (x < size)
	{
	if (cmp(array[x]))
	{
	return (x);
	}
	x++;
	}
	}
	}
	return (-1);
}
