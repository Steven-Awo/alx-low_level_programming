#include "main.h"

/**
 * binary_to_uint - A program that converts a binary
 * number to unsigned int
 * @b: the string that contain's the binary number
 * Return: dec_val (successfully)
 */

unsigned int binary_to_uint(const char *b)

{
	int x;
	unsigned int base_val = 0;

	if (!b)
	{
	return (0);
	}
	for (x = 0; b[x]; x++)
	{
	if (b[x] < '0' || b[x] > '1')
	{
	return (0);
	}
	base_val = 2 * base_val + (b[x] - '0');
	}
	return (base_val);
}
