#include "main.h"

/**
 * infinite_add - A program to encoder rot13
 * @n1: the first value added
 * @n2: the second value added
 * @r: the storage elements in array
 * @size_r: size of r
 * Return: *r (Successful)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)

{
	int a = 0;
	int b = 0;

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
	a = (*n1 - '0') + (*n2 - '0');
	a += b;
	*(r + size_r) = (a % 10) + '0';
	b = a / 10;
	}
	for (; *n1; n1--, size_r++)
	{
	a = *(n1 - '0') + b;
	*(r + size_r) = (a % 10) + '0';
	b = a / 10;
	}
	for (; *n2; n2--, size_r--)
	{
	a = (*n2 - '0') + b;
	*(r + size_r) = (a % 10) + '0';
	b = a / 10;
	}
	return (r);
}
