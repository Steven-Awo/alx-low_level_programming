#include "main.h"

/**
 * get_endianness - A program that checks if a machine
 * is little or big endian
 * Return: 0 (big) or 1 (little)
 */

int get_endianness(void)

{
	unsigned int x = 1;
	char *a = (char *) &x;

	return (*a);
}
