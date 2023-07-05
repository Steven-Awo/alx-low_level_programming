#include "main.h"

/**
 * _pow_recursion - A program that  prints a string & a new line.
 * @x: The base
 * @y: The exponetial
 * Return: -1 < 0 or 1 = 0 or zero (Successful)
 */

int _pow_recursion(int x, int y)

{
	if (y == 0)
	{
	return (1);
	}
	else if (y < 0)
	{
	return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
