#include "search_algos.h"

/**
 * interpolation_search - the function that searches for a value in an array of
 * integers using the interpolation search algorithm
 * @array:  the inputed array
 * @size: the array's size
 * @value: the value to be search in
 * Return: the index for the number
 */

int interpolation_search(int *array, size_t size, int value)

{
	size_t postn, lowr, highr;
	double ff;

	if (array == NULL)
	{
	return (-1);
	}
	lowr = 0;
	highr = size - 1;
	while (size)
	{
	ff = (double)(highr - lowr) / (array[highr] - array[lowr]) *
		(value - array[lowr]);
	postn = (size_t)(lowr + ff);
	printf("Value checked array[%d]", (int)postn);
	if (postn >= size)
	{
	printf(" is out of range\n");
	break;
	}
	else
	{
	printf(" = [%d]\n", array[postn]);
	}
	if (array[postn] == value)
		return ((int)postn);
	if (array[postn] < value)
		lowr = postn + 1;
	else
		highr = postn - 1;
	if (lowr == highr)
	{
	break;
	}}
	return (-1);
}
