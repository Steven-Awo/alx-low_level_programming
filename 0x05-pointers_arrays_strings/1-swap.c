#include "main.h"
#include <stdio.h>

/**
 * swap_int - check the code
 * @a: The first integer to swap
 * @b: The second integer to swap
 * Return: 0 ()
 */
void swap_int(int *a, int *b)

{
	int holda = *a;
	*a = *b;
	*b = holda;
}
