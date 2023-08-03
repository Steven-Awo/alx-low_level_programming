#include "main.h"

/**
 * get_bit - A program that returns the value of
 * a bit at an index in a decimal number
 * @n: the number to search for
 * @index: the index or number of the bit
 * Return: the value of the bit(bit_val)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val_of_bit;

	if (index > 63)
	{
	return (-1);
	}
	val_of_bit = (n >> index) & 1;
	return (val_of_bit);
}
