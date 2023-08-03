#include "main.h"

/**
 * flip_bits - A program that counts the number of bits for
 * change to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: number of bits to change 'count'(successful)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int x;
	int numbs = 0;
	unsigned long int current_numb;
	unsigned long int special = n ^ m;

	for (x = 63; x >= 0; x--)
	{
	current_numb = special >> x;
	if (current_numb & 1)
	{
	numbs++;
	}
	}
	return (numbs);
}
