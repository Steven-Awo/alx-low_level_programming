#include "main.h"
#include <stdio.h>
/**
 * _sqrt - Calculates natural square root
 * _sqrt_recursion - A program that  prints a square root of n.
 * @n: The string to be used
 * @i: iterate number
 * Return: 0 (Successful)
 */

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - A program that  prints a square root of n.
 * @n: number to calculated
 * Return: 0 (successful)
 */

int _sqrt_recursion(int n)

{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates natural square root
 * _sqrt_recursion - A program that  prints a square root of n.
 * @n: The string to be used
 * @i: iterate number
 * Return: 0 (Successful)
 */

int _sqrt(int n, int i)

{
	int sqrt = i * i;

	if (sqrt > n)
	{return (-1);
	}
	if (sqrt == n)
	{
	return (i);
	}
	return (_sqrt(n, i + 1));
}
