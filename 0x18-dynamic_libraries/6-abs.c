#include "main.h"

/**
 * _abs - A program that computes integers
 * @c: the figure to be computed
 * Return: value or zero (Success)
 */

int _abs(int c)

{
	if (c < 0)
	{
	int absol_val;

	absol_val = c * -1;
	return (absol_val);
	}
	return (c);
}
