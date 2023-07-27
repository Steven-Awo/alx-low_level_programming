#include "main.h"

/**
 * reverse_array - A program to concatenate two strngs
 * @a: The array to be reversed
 * @n: The number of values in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int holdnumb;
	int numb;

	for (numb = n - 1; numb >= n / 2; numb--)
	{
	holdnumb = a[n - 1 - numb];
	a[n - 1 - numb] = a[numb];
	a[numb] = holdnumb;
	}
}
