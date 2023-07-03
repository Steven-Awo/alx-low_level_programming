#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A program that gets the length of a prefix substring.
 * @a: The array
 * @size: The size
 * Return: 0 (Successful)
 */

void print_diagsums(int *a, int size)

{
	int x, y;
	int add1 = 0;
	int add2 = 0;

	for (x = 0; x <= (size * size); x = x + size + 1)
	{
	add1 = add1 + a[x];
	}
	for (y = size - 1; y <= (size * size) - size; y = y + size - 1)
	add2 = add2 + a[y];
	printf("%d, %d\n", add1, add2);
}
