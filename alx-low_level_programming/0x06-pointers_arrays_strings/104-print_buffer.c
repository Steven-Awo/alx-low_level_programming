#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A program to encoder rot13
 * @b: the number of byte(s)
 * @size: the byte size
 * Return: *x (Successful)
 */

void print_buffer(char *b, int size)

{
	int c, y, z;
	int a = 0;

	if (size <= 0)
	{
	printf("\n");
	return;
	}
	while (a < size)
	{
	y = size - a < 10 ? size - a : 10;
	printf("%08x: ", a);
	for (z = 0; z < 10; z++)
	{
	if (z < y)
		printf("%02x", *(b + a + z));
	else
		printf("  ");
	if (z % 2)
		printf(" ");
	}
	for (z = 0; z < y; z++)
	{
	c = *(b + a + z);
	if (c < 32 || c > 132)
	{
	c = '.';
	}
	printf("%c", c);	
	}
	printf("\n");
	a += 10;
	}
}
