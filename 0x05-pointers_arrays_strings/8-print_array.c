#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - A PROGRAM TO RETURN THE LENGTH OF A STRING
 * @n: the ARRAY
 * @a: the number of element in n
 * Return: 0 (successful)
 */

void print_array(int *a, int n)

{
	int x;

	for (x = 0; x < n; x++)
	{
	printf("%d", a[x]);
	if (x != (n -1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
